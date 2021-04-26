//
// Created by lyubo on 23.04.21 г..
//

#include "TeamLead.hpp"

TeamLead::TeamLead(const Employee& employee, const std::string& machine, const std::string& manages)
    :Employee(employee) {
    this->machine_name = machine;
    this->manages = manages;
}