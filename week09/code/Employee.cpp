//
// Created by lyubo on 23.04.21 г..
//

#include "Employee.hpp"

Employee::Employee(): id(0) {}
Employee::Employee(const std::string& first_name, const std::string& last_name, const unsigned short id, const std::string& department,
         const double& salary, const Experience& experience):
        Person(first_name, last_name), id(id), department(department), salary(salary),
        experience(experience) {}

unsigned short Employee::get_id() const {
    return this->id;
}
std::string Employee::get_department() const {
    return this->department;
}
double Employee::get_salary() const {
    return this->salary;
}
Experience Employee::get_experience() const {
    return this->experience;
}