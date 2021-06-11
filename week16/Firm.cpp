//
// Created by lyubo on 9.06.21 г..
//

#include "Firm.hpp"

Firm::Firm(const Firm& from) {
    this->people = Firm::copy_vector(from.people);
}

Firm& Firm::operator=(const Firm& from) {
    if (this != &from) {
        this->clear_memory();
        this->people = Firm::copy_vector(from.people);
    }
    return *this;
}
Firm::~Firm() {
    this->clear_memory();
}

Person* Firm::operator[](const int index) const {
    if (0 <= index && index < this->people.size()) {
        return this->people[index];
    }

    throw std::out_of_range("Index is out of range !");
}
void Firm::add(const Person* person) {
    this->people.push_back(person->clone());
}

void Firm::clear_memory() {
    for(const Person* person: this->people) {
        delete person;
    }
    this->people.clear();
}
std::vector<Person*> Firm::copy_vector(const std::vector<Person*> from) {
    std::vector<Person*> result;

    for(const Person* person: from) {
        result.push_back(person->clone());
    }

    return result;
}