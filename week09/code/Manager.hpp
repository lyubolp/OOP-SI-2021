//
// Created by lyubo on 23.04.21 г..
//

#ifndef CODE_MANAGER_HPP
#define CODE_MANAGER_HPP


#include "Employee.hpp"

class Manager: virtual public Employee {
public:
    Manager() = default;
    Manager(const Employee& employee, const std::string& manages);

    std::string get_manages() const;

protected:
    std::string manages;
};


#endif //CODE_MANAGER_HPP
