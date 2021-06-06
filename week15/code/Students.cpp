//
// Created by lyubo on 2.06.21 г..
//

#include <numeric>
#include "Students.h"

double Students::get_averag_grade() const {
    return this->get_sum_grades() / this->students.size();
}
std::vector<std::string> Students::get_all_names() const {
    std::vector<std::string> names(this->students.size());

    std::transform(this->students.begin(), this->students.end(),
                   names.begin(),
                   [](const Student& student) -> std::string {return student.get_name();});
    return names;
}

double Students::get_sum_grades() const {

    return std::accumulate(this->students.begin(), this->students.end(), 0,
                           [](const double sum, const double elem) {
                                        return sum + elem; });
}