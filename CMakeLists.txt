cmake_minimum_required(2.8.3)
project(slam_tools)

find_package(Eigen3 REQUIRED)
find_package(OpenCV4 REQUIRED)

include_directories(
  include
  ${EIGEN3_INCLUDE_DIR}
  ${OPENCV_INCLUDE_DIRS}
)

