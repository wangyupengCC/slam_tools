#pragma
#include <iostream>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Cholesky>
#include <types.h>

namespace slam_tools
{

  void findEssentialMat(Points2d& kpts0,Points2d& kpts1,RotationMatrix& R,TranslationVector& t);
}