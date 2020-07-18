#ifndef YOLO_V2_CLASS_HPP
#define YOLO_V2_CLASS_HPP

#ifndef LIB_API
#ifdef LIB_EXPORTS
#if defined(_MSC_VER)
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __attribute__((visibility("default")))
#endif
#else
#if defined(_MSC_VER)
#define LIB_API
#else
#define LIB_API
#endif
#endif
#endif

#define C_SHARP_MAX_OBJECTS 1000

struct bbox_t {
    unsigned int x, y, w, h;       // (x,y) - top-left corner, (w, h) - width & height of bounded box
    float prob;                    // confidence - probability that the object was found correctly
    unsigned int obj_id;           // class of object - from range [0, classes-1]
    unsigned int track_id;         // tracking id for video (0 - untracked, 1 - inf - tracked object)
    unsigned int frames_counter;   // counter of frames on which the object was detected
    float x_3d, y_3d, z_3d;        // center of object (in Meters) if ZED 3D Camera is used
};

struct image_t {
    int h;                        // height
    int w;                        // width
    int c;                        // number of chanels (3 - for RGB)
    float *data;                  // pointer to the image data
};

struct bbox_t_container {
    bbox_t candidates[C_SHARP_MAX_OBJECTS];
};

#ifdef __cplusplus
#include <memory>
#include <vector>
#include <deque>
#include <algorithm>
#include <chrono>
#include <string>
#include <sstream>
#include <iostream>
#include <cmath>
#define OPENCV
#ifdef OPENCV
#include <opencv2/opencv.hpp>            // C++
#include <opencv2/highgui/highgui_c.h>   // C
#include <opencv2/imgproc/imgproc_c.h>   // C
#endif

extern "C" LIB_API int init(const char *configurationFilename, const char *weightsFilename, int gpu);
extern "C" LIB_API int detect_image(const char *filename, bbox_t_container &container);
extern "C" LIB_API int detect_mat(const uint8_t* data, const size_t data_length, bbox_t_container &container);
extern "C" LIB_API int dispose();
extern "C" LIB_API int get_device_count();
extern "C" LIB_API int get_device_name(int gpu, char* deviceName);
extern "C" LIB_API bool built_with_cuda();
extern "C" LIB_API bool built_with_cudnn();
extern "C" LIB_API bool built_with_opencv();
extern "C" LIB_API void send_json_custom(char const* send_buf, int port, int timeout);

class Detector {
    std::shared_ptr<void> detector_gpu_ptr;
    std::deque<std::vector<bbox_t>> prev_bbox_vec_deque;
    std::string _cfg_filename, _weight_filename;
public:
    const int cur_gpu_id;
    float nms = .4;
    bool wait_stream;

    LIB_API Detector(std::string cfg_filename, std::string weight_filename, int gpu_id = 0);
    LIB_API ~Detector();

    LIB_API std::vector<bbox_t> detect(std::string image_filename, float thresh = 0.2, bool use_mean = false);
    LIB_API std::vector<bbox_t> detect(image_t img, float thresh = 0.2, bool use_mean = false);
    static LIB_API image_t load_image(std::string image_filename);
    static LIB_API void free_image(image_t m);
    LIB_API int get_net_width() const;
    LIB_API int get_net_height() const;
    LIB_API int get_net_color_depth() const;

    LIB_API std::vector<bbox_t> tracking_id(std::vector<bbox_t> cur_bbox_vec, bool const change_history = true,
                                                int const frames_story = 5, int const max_dist = 40);

    LIB_API void *get_cuda_context();

    //LIB_API bool send_json_http(std::vector<bbox_t> cur_bbox_vec, std::vector<std::string> obj_names, int frame_id,
    //    std::string filename = std::string(), int timeout = 400000, int port = 8070);

    std::vector<bbox_t> detect_resized(image_t img, int init_w, int init_h, float thresh = 0.2, bool use_mean = false)
    {
        if (img.data == NULL)
            throw std::runtime_error("Image is empty");
        auto detection_boxes = detect(img, thresh, use_mean);
        float wk = (float)init_w / img.w, hk = (float)init_h / img.h;
        for (auto &i : detection_boxes) i.x *= wk, i.w *= wk, i.y *= hk, i.h *= hk;
        return detection_boxes;
    }

#ifdef OPENCV
    std::vector<bbox_t> detect(cv::Mat mat, float thresh = 0.2, bool use_mean = false)
    {
        if(mat.data == NULL)
            throw std::runtime_error("Image is empty");
        auto image_ptr = mat_to_image_resize(mat);
        return detect_resized(*image_ptr, mat.cols, mat.rows, thresh, use_mean);
    }

    std::shared_ptr<image_t> mat_to_image_resize(cv::Mat mat) const
    {
        if (mat.data == NULL) return std::shared_ptr<image_t>(NULL);

        cv::Size network_size = cv::Size(get_net_width(), get_net_height());
        cv::Mat det_mat;
        if (mat.size() != network_size)
            cv::resize(mat, det_mat, network_size);
        else
            det_mat = mat;  // only reference is copied

        return mat_to_image(det_mat);
    }

    static std::shared_ptr<image_t> mat_to_image(cv::Mat img_src)
    {
        cv::Mat img;
        if (img_src.channels() == 4) cv::cvtColor(img_src, img, cv::COLOR_RGBA2BGR);
        else if (img_src.channels() == 3) cv::cvtColor(img_src, img, cv::COLOR_RGB2BGR);
        else if (img_src.channels() == 1) cv::cvtColor(img_src, img, cv::COLOR_GRAY2BGR);
        else std::cerr << " Warning: img_src.channels() is not 1, 3 or 4. It is = " << img_src.channels() << std::endl;
        std::shared_ptr<image_t> image_ptr(new image_t, [](image_t *img) { free_image(*img); delete img; });
        *image_ptr = mat_to_image_custom(img);
        return image_ptr;
    }

private:

    static image_t mat_to_image_custom(cv::Mat mat)
    {
        int w = mat.cols;
        int h = mat.rows;
        int c = mat.channels();
        image_t im = make_image_custom(w, h, c);
        unsigned char *data = (unsigned char *)mat.data;
        int step = mat.step;
        for (int y = 0; y < h; ++y) {
            for (int k = 0; k < c; ++k) {
                for (int x = 0; x < w; ++x) {
                    im.data[k*w*h + y*w + x] = data[y*step + x*c + k] / 255.0f;
                }
            }
        }
        return im;
    }

    static image_t make_empty_image(int w, int h, int c)
    {
        image_t out;
        out.data = 0;
        out.h = h;
        out.w = w;
        out.c = c;
        return out;
    }

    static image_t make_image_custom(int w, int h, int c)
    {
        image_t out = make_empty_image(w, h, c);
        out.data = (float *)calloc(h*w*c, sizeof(float));
        return out;
    }

#endif    // OPENCV

public:

    bool send_json_http(std::vector<bbox_t> cur_bbox_vec, std::vector<std::string> obj_names, int frame_id,
        std::string filename = std::string(), int timeout = 400000, int port = 8070)
    {
        std::string send_str;

        char *tmp_buf = (char *)calloc(1024, sizeof(char));
        if (!filename.empty()) {
            sprintf(tmp_buf, "{\n \"frame_id\":%d, \n \"filename\":\"%s\", \n \"objects\": [ \n", frame_id, filename.c_str());
        }
        else {
            sprintf(tmp_buf, "{\n \"frame_id\":%d, \n \"objects\": [ \n", frame_id);
        }
        send_str = tmp_buf;
        free(tmp_buf);

        for (auto & i : cur_bbox_vec) {
            char *buf = (char *)calloc(2048, sizeof(char));

            sprintf(buf, "  {\"class_id\":%d, \"name\":\"%s\", \"absolute_coordinates\":{\"center_x\":%d, \"center_y\":%d, \"width\":%d, \"height\":%d}, \"confidence\":%f",
                i.obj_id, obj_names[i.obj_id].c_str(), i.x, i.y, i.w, i.h, i.prob);

            //sprintf(buf, "  {\"class_id\":%d, \"name\":\"%s\", \"relative_coordinates\":{\"center_x\":%f, \"center_y\":%f, \"width\":%f, \"height\":%f}, \"confidence\":%f",
            //    i.obj_id, obj_names[i.obj_id], i.x, i.y, i.w, i.h, i.prob);

            send_str += buf;

            if (!std::isnan(i.z_3d)) {
                sprintf(buf, "\n    , \"coordinates_in_meters\":{\"x_3d\":%.2f, \"y_3d\":%.2f, \"z_3d\":%.2f}",
                    i.x_3d, i.y_3d, i.z_3d);
                send_str += buf;
            }

            send_str += "}\n";

            free(buf);
        }

        //send_str +=  "\n ] \n}, \n";
        send_str += "\n ] \n}";

        send_json_custom(send_str.c_str(), port, timeout);
        return true;
    }
};
// --------------------------------------------------------------------------------


#endif    // OPENCV

#endif    // __cplusplus

//#endif    // YOLO_V2_CLASS_HPP
