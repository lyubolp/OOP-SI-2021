//
// Created by lyubo on 24.03.21 г..
//

#ifndef WEEK05_CAR_HPP
#define WEEK05_CAR_HPP

#include <string>
#include "SteeringWheel.hpp"
class Car {
public:
    Car();

    void steer_left(const double& by);
    void steer_right(const double& by);

    double get_wheel_rotation() const;
private:
    std::string model;
    std::string maker;
    SteeringWheel wheel;
    int speed;
    double turn_angle;

};


#endif //WEEK05_CAR_HPP
