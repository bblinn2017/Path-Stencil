#ifndef CAMERA_H
#define CAMERA_H

#include <Eigen/Dense>

class Camera
{
public:
    Camera();

    virtual Eigen::Matrix4f getViewMatrix() = 0;
};

#endif // CAMERA_H