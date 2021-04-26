//
// Created by lyubo on 23.04.21 г..
//

#include "Manager.hpp"

Manager::Manager(const Employee& employee, const std::string& manages): Employee(employee), manages(manages) {}

std::string Manager::get_manages() const {
    return this->manages;
}