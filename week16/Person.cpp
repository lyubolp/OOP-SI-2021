//
// Created by lyubo on 9.06.21 г..
//

#include "Person.hpp"

Person::Person(): age(0) {}

Person& Person::with_first_name(const std::string& first_name) {
    this->first_name = first_name;
    return *this;
}
Person& Person::with_last_name(const std::string& last_name) {
    this->last_name = last_name;
    return *this;
}
Person& Person::with_age(const unsigned age) {
    this->age = age;
    return *this;
}

std::string Person::get_first_name() const {
    return this->first_name;
}
std::string Person::get_last_name() const {
    return this->last_name;
}
unsigned Person::get_age() const {
    return this->age;
}

std::string Person::to_string() const {
    return this->first_name + " " + this->last_name + ", " + std::to_string(this->age);
}