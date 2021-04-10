//
// Created by lyubo on 7.04.21 г..
//

#include "Person.hpp"
Person::Person(): first_name(""), last_name(""), age(-1) {}

Person::Person(const std::string& first_name, const std::string& last_name, const int age) {
    this->first_name = first_name;
    this->last_name = last_name;
    this->age = age;
}

std::string Person::get_first_name() const {
    return this->first_name;
}
std::string Person::get_last_name() const {
    return this->last_name;
}
int Person::get_age() const {
    return this->age;
}
void Person::set_name(const std::string& new_name) {
    this->first_name = new_name;
}

std::string Person::print() const {
    return "Hi, my name is: " + this->first_name + " "
              + this->get_last_name() + " and I'm " + std::to_string(this->get_age()) + " years old\n";
}

std::ostream& operator<<(std::ostream& out, const Person& to_print){
    out << to_print.print();
    return out;
}

std::istream& operator>>(std::istream& in, Person& to_write) {
    std::cout << "Enter first name:\n";

    std::string temp_name;
    in >> temp_name;
    to_write.set_name(temp_name);

    std::cout << "Enter last name:\n";
    in >> to_write.last_name;

    std::cout << "Enter age:\n";
    in >> to_write.age;
    return in;
}
