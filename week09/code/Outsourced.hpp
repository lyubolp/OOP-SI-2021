//
// Created by lyubo on 23.04.21 г..
//

#ifndef CODE_OUTSOURCED_HPP
#define CODE_OUTSOURCED_HPP
#include <string>

class Outsourced {
public:
    Outsourced();
    Outsourced(const std::string& name, const std::string& department, const double& salary);

    std::string get_name() const;
    std::string get_department() const;
    double get_salary() const;
private:
    std::string name;
    std::string department;
    double salary;
};


#endif //CODE_OUTSOURCED_HPP
