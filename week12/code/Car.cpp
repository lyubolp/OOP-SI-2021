//
// Created by lyubo on 12.05.21 г..
//

#include "Car.hpp"

Car::Car(): Vehicle(), is_private(true) {}
Car::Car(const std::string& maker, const std::string& model, const unsigned short year, const std::string& problem, const Severity& severity, const bool is_private):
Vehicle(maker, model, year, problem, severity), is_private(is_private) {}

bool Car::get_is_private() const {
    return this->is_private;
}
void Car::set_is_private(const bool new_is_private){
    this->is_private = new_is_private;
}

Vehicle* Car::clone() const {
    return new Car(*this);
}