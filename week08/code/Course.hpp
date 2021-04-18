//
// Created by lyubo on 16.04.21 г..
//

#ifndef WEEK08_COURSE_HPP
#define WEEK08_COURSE_HPP

#include <string>
#include "Teacher.hpp"

class Course {
public:
    Course();
    Course(const std::string& name, const Teacher& teacher, const unsigned grade);

    std::string get_name() const;
    Teacher get_teacher() const;
    unsigned get_grade() const;
private:
    std::string name;
    Teacher teacher;
    unsigned grade;
};


#endif //WEEK08_COURSE_HPP
