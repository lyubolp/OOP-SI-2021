//
// Created by lyubo on 25.03.21 г..
//

#include "User.hpp"

int User::counter = 1;

User::User() {
    this->username = "default";
    this->password = "1234";
    this->id = User::generate_id(this->username);
}
User::User(const std::string& username, const std::string& password): username(username), password(password), id(User::generate_id(this->username)) {}

bool User::login(const std::string& password) {
    this->counter;
    return this->password == password;
}

std::string User::get_id() const {
    return this->id;
}
std::string User::get_username() const {
    return this->username;
}

std::string User::generate_id(const std::string& username) {
    std::string result = username.substr(0, 4);
    result += std::to_string(counter);
    User::counter += 1;

    return result;
}