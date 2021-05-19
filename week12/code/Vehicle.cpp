//
// Created by lyubo on 12.05.21 г..
//

#include "Vehicle.hpp"

Vehicle::Vehicle(): year(0), severity(Severity::Low) {}
Vehicle::Vehicle(const std::string& maker, const std::string& model, const unsigned short year, const std::string& problem, const Severity& severity)
:maker(maker), model(model), year(year), problem(problem), severity(severity){}

std::string Vehicle::get_maker() const {
    return this->maker;
}
std::string Vehicle::get_model() const {
    return this->model;
}
unsigned short Vehicle::get_year() const {
    return this->year;
}
std::string Vehicle::get_problem() const {
    return this->problem;
}
Severity Vehicle::get_severity() const {
    return this->severity;
}

void Vehicle::set_maker(const std::string& new_maker) {
    this->maker = new_maker;
}
void Vehicle::set_model(const std::string& new_model) {
    this->model = new_model;
}
void Vehicle::set_year(const unsigned short new_year) {
    this->year = new_year;
}
void Vehicle::set_problem(const std::string& new_problem) {
    this->problem = new_problem;
}
void Vehicle::set_severity(const Severity& new_severity) {
    this->severity = new_severity;
}