#pragma once

#include <vector>
#include <eigen3/Eigen/Core>

namespace slam_tools
{
  using Point2d = Eigen::Matrix<double,2,1>;
  using Points2d = std::vector<Point2d,Eigen::aligned_allocator<Point2d>>;
  using Point3d = Eigen::Matrix<double,3,1>;
  using Points3d = std::vector<Point3d,Eigen::aligned_allocator<Point3d>>;

  using RotationMatrix = Eigen::Matrix<double,3,3>;
  using TranslationVector = Eigen::Matrix<double,3,1>;
}