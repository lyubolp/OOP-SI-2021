//
// Created by lyubo on 7.04.21 г..
//

#ifndef WEEK07_PERSON_HPP
#define WEEK07_PERSON_HPP

#include <string>
#include <iostream>
class Person {
public:
    Person();
    Person(const std::string& first_name, const std::string& last_name, const int age);

    std::string get_first_name() const;
    std::string get_last_name() const;
    int get_age() const;

    std::string print() const;

    void set_name(const std::string& new_name);

    friend std::ostream& operator<<(std::ostream& out, const Person& to_print);
    friend std::istream& operator>>(std::istream& in, Person& to_write);
private:
    std::string first_name;
    std::string last_name;
    int age;
    std::string SSN;
};



#endif //WEEK07_PERSON_HPP
