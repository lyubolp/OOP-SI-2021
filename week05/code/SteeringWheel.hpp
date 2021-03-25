//
// Created by lyubo on 24.03.21 г..
//

#ifndef WEEK05_STEERINGWHEEL_HPP
#define WEEK05_STEERINGWHEEL_HPP


class SteeringWheel {
public:
    SteeringWheel();

    double get_rotation() const;

    friend void turn_the_wheel_left(const double& by, SteeringWheel& to_turn);
    friend class Car;
private:
    void steer_left(const double& by);
    void steer_right(const double& by);

    double wheel_rotation;
};


#endif //WEEK05_STEERINGWHEEL_HPP
