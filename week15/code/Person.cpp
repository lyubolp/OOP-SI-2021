//
// Created by lyubo on 3.06.21 г..
//

#include "Person.hpp"
Person::Person(): first_name(Person::copy_c_string("")), last_name(Person::copy_c_string("")) {}
Person::Person(const char* first_name, const char* last_name): first_name(Person::copy_c_string(first_name)), last_name(Person::copy_c_string(last_name)) {}

Person::Person(const Person& from) {
    this->copy_object(from);
}
Person& Person::operator=(const Person& from) {
    if(this != &from) {
        this->clean_up_memory();
        this->copy_object(from);
    }
    return *this;
}
Person::~Person() {
    this->clean_up_memory();
}

void Person::set_first_name(const char* first_name) {
    delete[] this->first_name;
    this->first_name = Person::copy_c_string(first_name);
}
void Person::set_last_name(const char* last_name) {
    delete[] this->last_name;
    this->last_name = Person::copy_c_string(last_name);
}

char* Person::get_first_name() const {
    return this->first_name;
}
char* Person::get_last_name() const {
    return this->last_name;
}

std::ostream& operator<<(std::ostream& out, const Person& object) {
    out << object.first_name << " " << object.last_name << std::endl;
    return out;
}
std::istream& operator>>(std::istream& in, Person& object) {
    char buffer[100];

    in >> buffer;
    object.set_first_name(buffer);

    in >> buffer;
    object.set_last_name(buffer);
}

void Person::write_to_file(const char* filename) const {
    std::ofstream result(filename, std::ios::app);

    if(result.is_open()) {
        result << this;
        result.close();
    }
}

char* Person::copy_c_string(const char* source) {
    int length = strlen(source);

    char* result = new char[length + 1];
    strcpy(result, source);

    return result;
}
void Person::copy_object(const Person& from) {
    this->first_name = Person::copy_c_string(from.first_name);
    this->last_name = Person::copy_c_string(from.last_name);
}

void Person::clean_up_memory() {
    delete[] this->first_name;
    delete[] this->last_name;
}