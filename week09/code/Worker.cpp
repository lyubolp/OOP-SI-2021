//
// Created by lyubo on 23.04.21 г..
//

#include "Worker.hpp"

Worker::Worker(const Employee& employee, const std::string& machine): Employee(employee), machine_name(machine) {}
std::string Worker::get_machine_name() const {
    return this->machine_name;
}