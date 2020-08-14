cmake_minimum_required(VERSION 3.5)
project(detect_s)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(test_interfaces REQUIRED)
find_package(message_filters REQUIRED)
find_package(OpenCV REQUIRED)
include_directories(include ${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIB_DIR} lib)

#target_include_directories(talker PUBLIC
#  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#  $<INSTALL_INTERFACE:include>)

add_executable(cameraTimer src/CameraTimer.cpp)
ament_target_dependencies(cameraTimer rclcpp test_interfaces message_filters OpenCV sensor_msgs)
add_executable(yoloDetect src/YoloDetect.cpp)
ament_target_dependencies(yoloDetect rclcpp test_interfaces message_filters OpenCV sensor_msgs)
target_link_libraries(yoloDetect dark)
add_executable(line src/Line.cpp)
ament_target_dependencies(line rclcpp test_interfaces message_filters OpenCV sensor_msgs)
target_link_libraries(line line_detect)


install(TARGETS cameraTimer yoloDetect
  EXPORT export_${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
