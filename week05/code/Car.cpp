//
// Created by lyubo on 24.03.21 г..
//

#include "Car.hpp"

Car::Car() {
    this->maker = "Some Car maker";
    this->model = "Some Car model";
}
void Car::steer_left(const double& by) {
    this->wheel.steer_left(by);
}
void Car::steer_right(const double& by) {
    this->wheel.steer_right(by);
}

double Car::get_wheel_rotation() const {
    return this->wheel.get_rotation();
}