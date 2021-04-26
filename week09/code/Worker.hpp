//
// Created by lyubo on 23.04.21 г..
//

#ifndef CODE_WORKER_HPP
#define CODE_WORKER_HPP

#include <string>
#include "Employee.hpp"

class Worker: virtual public Employee {
public:
    Worker() = default;
    Worker(const Employee& employee, const std::string& machine);
    std::string get_machine_name() const;

protected:
    std::string machine_name;
};


#endif //CODE_WORKER_HPP
