//
// Created by lyubo on 16.04.21 г..
//

#ifndef WEEK08_STUDENT_HPP
#define WEEK08_STUDENT_HPP

#include <string>
#include <vector>

#include "Person.hpp"
#include "Course.hpp"

class Student: public Person {
public:
    Student();
    Student(const std::pair<const std::string&, const std::string&>& name,
           const unsigned age, const Address& address,
           const unsigned faculty_id);
    Student(const std::pair<const std::string&, const std::string&>& name,
           const unsigned age, const std::pair<const std::string&, const std::string&>& address,
           const unsigned faculty_id);

    void enroll(const Course& course);

    unsigned get_faculty_id() const;
    std::vector<Course> get_enrolled_courses() const;
    double get_average_grade() const;
private:
    static double get_average_grade(const std::vector<Course>& courses);

    unsigned faculty_id;
    std::vector<Course> enrolled_courses;
};


#endif //WEEK08_STUDENT_HPP
