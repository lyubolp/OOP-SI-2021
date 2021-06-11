//
// Created by lyubo on 9.06.21 г..
//

#include "Worker.hpp"

Worker::Worker(): Person(), salary(0) {}
Worker& Worker::with_salary(const unsigned salary) {
    this->salary = salary;
    return *this;
}

unsigned Worker::get_salary() const {
    return this->salary;
}
std::string Worker::to_string() const {
    return this->Person::to_string() + ", " + std::to_string(this->salary);
}

Person* Worker::clone() const {
    return new Worker(*this);
}