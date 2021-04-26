//
// Created by lyubo on 23.04.21 г..
//

#include "Outsourced.hpp"

Outsourced::Outsourced(): salary(0) {}
Outsourced::Outsourced(const std::string& name, const std::string& department, const double& salary)
    :name(name), department(department), salary(salary) {}


std::string Outsourced::get_name() const {
    return this->name;
}
std::string Outsourced::get_department() const {
    return this->department;
}
double Outsourced::get_salary() const {
    return this->salary;
}