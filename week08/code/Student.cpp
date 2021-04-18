//
// Created by lyubo on 16.04.21 г..
//

#include "Student.hpp"

Student::Student(): faculty_id(0){
}
Student::Student(const std::pair<const std::string&, const std::string&>& name,
        const unsigned age, const Address& address,
        const unsigned faculty_id)
        : Person(name, age, address),
        faculty_id(faculty_id) {}

Student::Student(const std::pair<const std::string&, const std::string&>& name,
        const unsigned age, const std::pair<const std::string&, const std::string&>& address,
        const unsigned faculty_id): Person(name, age, address),
                                    faculty_id(faculty_id) {}

void Student::enroll(const Course& course) {
    this->enrolled_courses.push_back(course);
}

unsigned Student::get_faculty_id() const {
    return this->faculty_id;
}
std::vector<Course> Student::get_enrolled_courses() const {
    return this->get_enrolled_courses();
}
double Student::get_average_grade() const {
    return Student::get_average_grade(this->enrolled_courses);
}

double Student::get_average_grade(const std::vector<Course>& courses) {
    double sum = 0;

    for (const Course& course: courses) {
        sum += course.get_grade();
    }
    return sum / courses.size();
}