#include <iostream>
#include <fstream>

class Person{
private:
    std::string name;
    unsigned age;
public:
    Person(const std::string& name = "", const unsigned age = 0): name(name), age(age) {}

    std::string get_name() const {
        return this->name;
    }

    unsigned get_age() const {
        return this->age;
    }

};

std::ostream& operator<<(std::ostream& out, const Person& person) {
    out << "Name: " << person.get_name() << "\nAge: " << person.get_age();

    return out;
}

std::istream& operator>>(std::istream& in, Person& person) {
    std::string new_name;
    in >> new_name;

    unsigned new_age;
    in >> new_age;

    person = Person(new_name, new_age);

    return in;
}

int main() {
    Person person("Lyubo", 22);
    /*std::cout << person << std::endl;

    std::cin >> person;
    std::cout << person << std::endl;*/


    std::ifstream reader("text.txt");

    if(reader.is_open()) {
        std::string content;
        char c;
        while(reader.get(c)) {
            if (c != ';') {
                content.push_back(c);
            }
            else {
                std::cout << "Read from the file: " << content << std::endl;
                content = "";
            }
        }

        reader.close();
    }

    std::ofstream writer("person.txt", std::ios::app);

    if(writer.is_open()) {
        writer << person;
        writer.close();
    }

    return 0;
}
