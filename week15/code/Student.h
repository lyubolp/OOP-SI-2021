//
// Created by lyubo on 2.06.21 г..
//

#ifndef CODE_STUDENT_H
#define CODE_STUDENT_H

#include <string>

class Student {
public:
    Student(const std::string& name = "", const double& grade = 2.0) {}

    std::string get_name() const;
    double get_grade() const;
private:
    std::string name;
    double grade;
};


#endif //CODE_STUDENT_H
