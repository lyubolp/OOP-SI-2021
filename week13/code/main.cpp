#include <iostream>
#include <vector>

class Database{
public:
    //1. No new instances from the outside *
    //2. Only once instance
    //3. Global access


    void add_data(const int point) {
        this->data.push_back(point);
    }

    int operator[](const int index) const{
        return this->data[index];
    }

    void remove_data(const int index) {
        if(0 <= index && index < this->data.size()) {
            this->data.erase(this->data.begin() + index);
        }
        throw std::invalid_argument("Index is not valid");
    }

    static Database* get_instance() {
        if (Database::instance == nullptr) {
            Database::instance = new Database();
        }
        return Database::instance;
    }
private:
    static Database* instance;
    Database() = default;

    ~Database(){
        delete instance;
    }

private:
    std::vector<int> data;
};
Database* Database::instance = nullptr;


class Person {
public:
    Person() = default;
    Person(const std::string& first_name, const std::string& last_name);

    std::string get_first_name() const {
        return this->first_name;
    }
    std::string get_last_name() const {
        return this->last_name;
    }
    std::string get_SSN() const {
        return this->SSN;
    }
    std::string get_birthplace() const {
        return this->birthplace;
    }
    std::string get_address() const {
        return this->address;
    }

    static Person init() {
        return Person();
    }

    Person& with_name(const std::string& name) {
        this->first_name = name;
        return *this;
    }

    Person& with_last_name(const std::string& name) {
        this->last_name = name;
        return *this;
    }

    Person& with_ssn(const std::string& SSN) {
        this->SSN = SSN;
        return *this;
    }

    Person& with_birthplace(const std::string& birthplace) {
        this->birthplace = birthplace;
        return *this;
    }

    Person& with_address(const std::string& address) {
        this->address = address;
        return *this;
    }

private:
    std::string first_name;
    std::string last_name;
    std::string SSN;

    std::string birthplace;
    std::string address;
};

int main() {

    Person me = Person::init()
                .with_ssn("123456789")
                .with_name("Lyubo")
                .with_birthplace("asdasd")
                .with_last_name("Karev");


    std::cout << me.get_first_name() << " " << me.get_last_name() << std::endl;
    return 0;
}
