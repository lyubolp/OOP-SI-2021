//
// Created by lyubo on 23.04.21 г..
//

#include "Person.hpp"

Person::Person(const std::string& first_name, const std::string& last_name) {
    this->first_name = first_name;
    this->last_name = last_name;
}

std::string Person::get_first_name() const {
    return this->first_name;
}
std::string Person::get_last_name() const {
    return this->last_name;
}