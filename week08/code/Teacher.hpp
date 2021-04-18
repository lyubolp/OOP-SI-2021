//
// Created by lyubo on 16.04.21 г..
//

#ifndef WEEK08_TEACHER_HPP
#define WEEK08_TEACHER_HPP

#include "Person.hpp"

class Teacher: public Person {
public:
    Teacher();

    Teacher(const std::pair<const std::string&, const std::string&>& name,
            const unsigned age, const Address& address, const unsigned years,
            const double& salary, const unsigned courses);

    Teacher(const std::pair<const std::string&, const std::string&>& name,
           const unsigned age, const std::pair<const std::string&, const std::string&>& address,
           const unsigned years, const double& salary, const unsigned courses);

    unsigned get_years_experience() const;
    double get_salary() const;
    unsigned get_courses_taught() const;
private:
    unsigned years_experience;
    double salary;
    unsigned courses_taught;
};


#endif //WEEK08_TEACHER_HPP
