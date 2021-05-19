//
// Created by lyubo on 13.05.21 г..
//

#include "Microbus.hpp"

Microbus::Microbus(): Vehicle(), has_passangers(false) {}
Microbus::Microbus(const std::string& maker, const std::string& model, const unsigned short year, const std::string& problem, const Severity& severity, const bool has_passangers):
Vehicle(maker, model, year, problem, severity), has_passangers(has_passangers) {}

bool Microbus::get_has_passangers() const {
    return this->has_passangers;
}
void Microbus::set_has_passangers(const bool new_has_passangers) {
    this->has_passangers = new_has_passangers;
}

Vehicle* Microbus::clone() const {
    return new Microbus(*this);
}