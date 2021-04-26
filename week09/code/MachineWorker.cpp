//
// Created by lyubo on 23.04.21 г..
//

#include "MachineWorker.hpp"

MachineWorker::MachineWorker(const Employee& employee, const std::string& machine): Employee(employee), machine_name(machine) {}
std::string MachineWorker::get_machine_name() const {
    return this->machine_name;
}