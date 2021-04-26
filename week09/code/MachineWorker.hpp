//
// Created by lyubo on 23.04.21 г..
//

#ifndef CODE_MACHINEWORKER_HPP
#define CODE_MACHINEWORKER_HPP

#include <string>
#include "Employee.hpp"

class MachineWorker: public Employee{
public:
    MachineWorker() = default;
    MachineWorker(const Employee& employee, const std::string& machine);
    std::string get_machine_name() const;
private:

    std::string machine_name;
};


#endif //CODE_MACHINEWORKER_HPP
