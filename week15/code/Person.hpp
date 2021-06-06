//
// Created by lyubo on 3.06.21 г..
//

#ifndef CODE_PERSON_HPP
#define CODE_PERSON_HPP

#include <iostream>
#include <cstring>
#include <fstream>

//const, const&, const this - 5pts
//dynamic memory code reuse - 5pts
class Person { //80pts
public:
    Person(); //8pts
    Person(const char* first_name, const char* last_name);
    Person(const Person& from); //8pts
    Person& operator=(const Person& from); //8pts
    ~Person(); //8pts

    void set_first_name(const char* first_name); //2pts
    void set_last_name(const char* last_name); //2pts

    char* get_first_name() const; //2pts
    char* get_last_name() const; //2pts

    friend std::ostream& operator<<(std::ostream& out, const Person& object); //10pts
    friend std::istream& operator>>(std::istream& in, Person& object); //10pts

    void write_to_file(const char* filename) const; //10pts

private:
    static char* copy_c_string(const char* source);
    void copy_object(const Person& from);
    void clean_up_memory();

    char* first_name;
    char* last_name;
};


#endif //CODE_PERSON_HPP
