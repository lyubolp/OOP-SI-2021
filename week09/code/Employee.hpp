//
// Created by lyubo on 23.04.21 г..
//

#ifndef CODE_EMPLOYEE_HPP
#define CODE_EMPLOYEE_HPP

#include <string>
#include "Experience.hpp"
#include "Person.hpp"

class Employee: public Person {
public:
    Employee();
    Employee(const std::string& first_name, const std::string& last_name, const unsigned short id, const std::string& department,
           const double& salary, const Experience& experience);

    unsigned short get_id() const;
    std::string get_department() const;
    double get_salary() const;
    Experience get_experience() const;
private:
    unsigned short id;
    std::string department;
    double salary;
    Experience experience;
};


#endif //CODE_EMPLOYEE_HPP
