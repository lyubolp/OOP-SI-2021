//
// Created by lyubo on 24.03.21 г..
//

#include "SteeringWheel.hpp"

SteeringWheel::SteeringWheel(): wheel_rotation(0.0) {}
void SteeringWheel::steer_left(const double& by) {
    this->wheel_rotation -= by;
}
void SteeringWheel::steer_right(const double& by) {
    this->wheel_rotation += by;
}
double SteeringWheel::get_rotation() const {
    return this->wheel_rotation;
}