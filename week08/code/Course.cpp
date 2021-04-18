//
// Created by lyubo on 16.04.21 г..
//

#include "Course.hpp"

Course::Course(): grade(0) {}
Course::Course(const std::string& name, const Teacher& teacher, const unsigned grade)
    : name(name), teacher(teacher), grade(grade) {}

std::string Course::get_name() const {
    return this->name;
}
Teacher Course::get_teacher() const {
    return this->teacher;
}
unsigned Course::get_grade() const {
    return this->grade;
}