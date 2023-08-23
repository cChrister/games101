#include<iostream>
#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
using namespace std;
int main(){
  Eigen::Vector3d p(2,1,1);
  Eigen::Matrix3d rotation;
  Eigen::Matrix3d trans;
  rotation << sqrt(2)/2, -sqrt(2)/2, 0,
              sqrt(2)/2, sqrt(2)/2, 0,
              0, 0, 1;
  trans << 1, 0, 1,
           0, 1, 2,
           0, 0, 1;

  cout << trans * rotation * p;
  return 0;
}