//
// Created by lyubo on 2.06.21 г..
//

#ifndef CODE_STUDENTS_H
#define CODE_STUDENTS_H

#include "Student.h"
#include <algorithm>
#include <vector>

class Students {
public:
    Students() = default;

    double get_averag_grade() const;
    std::vector<std::string> get_all_names() const;
private:
    double get_sum_grades() const;
    std::vector<Student> students;
};


#endif //CODE_STUDENTS_H
