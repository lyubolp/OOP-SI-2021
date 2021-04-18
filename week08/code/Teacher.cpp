//
// Created by lyubo on 16.04.21 г..
//

#include "Teacher.hpp"

Teacher::Teacher(): Person(), years_experience(0), salary(0.0), courses_taught(0) {}

Teacher::Teacher(const std::pair<const std::string&, const std::string&>& name,
        const unsigned age, const Address& address, const unsigned years,
        const double& salary, const unsigned courses):
            Person(name, age, address),
            years_experience(years),
            salary(salary),
            courses_taught(courses) {}

Teacher::Teacher(const std::pair<const std::string&, const std::string&>& name,
        const unsigned age, const std::pair<const std::string&, const std::string&>& address,
        const unsigned years, const double& salary, const unsigned courses):
            Person(name, age, address),
            years_experience(years),
            salary(salary),
            courses_taught(courses) {}

unsigned Teacher::get_years_experience() const {
    return this->years_experience;
}
double Teacher::get_salary() const {
    return this->salary;
}
unsigned Teacher::get_courses_taught() const {
    return this->courses_taught;
}