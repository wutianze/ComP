# cmake needs this line
cmake_minimum_required(VERSION 2.8)

# Define project name
project(opencv_example_project)

# Find OpenCV, you may need to set OpenCV_DIR variable
# to the absolute path to the directory containing OpenCVConfig.cmake file
# via the command line or GUI
find_package(OpenCV REQUIRED)

# If the package has been found, several variables will
# be set, you can find the full list with descriptions
# in the OpenCVConfig.cmake file.
# Print some message showing some of them
message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")

if(CMAKE_VERSION VERSION_LESS "2.8.11")
  # Add OpenCV headers location to your include paths
  include_directories(${OpenCV_INCLUDE_DIRS})
endif()

# Declare the executable target built from your sources
#add_executable(opencv_example example.cpp)
#add_executable(line_detect line_detect.cpp)

add_library(line_detect SHARED line_detect.cpp)
add_library(tracker_opencv SHARED tracker_opencv.cpp)
add_library(opencv_util SHARED opencv_util.cpp)

# Link your application with OpenCV libraries
target_link_libraries(tracker_opencv PRIVATE ${OpenCV_LIBS})
target_link_libraries(line_detect PRIVATE ${OpenCV_LIBS})
target_link_libraries(opencv_util PRIVATE ${OpenCV_LIBS})
