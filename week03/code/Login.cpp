//
// Created by lyubo on 10.03.21 г..
//

#include "Login.hpp"

Login::Login() {
    this->username = new char[1]{'\0'};
    this->password = new char[1]{'\0'};
    this->session = 0;
}
Login::Login(const char* username) {
    this->username = this->copy_char_array(username); //username
    this->password = new char[1]{'\0'}; //password
    this->session = 0;
}
Login::Login(const char* username, const char* password) {
    this->username = this->copy_char_array(username);
    this->password = this->copy_char_array(password);
    this->session = 0;
}
Login::Login(const char* username, const char* password, const int session): Login(username, password) {
    this->session = session;
}
Login::Login(const Login& from): Login(from.username, from.password, from.session) {
}

void Login::set_username(const char* new_username) {
    delete[] this->username;
    this->username = this->copy_char_array(new_username);
}
void Login::set_password(const char* new_password) {
    delete[] this->password;
    this->password = this->copy_char_array(new_password);
}
void Login::set_session(const int new_session) {
    this->session = new_session;
}

void Login::print() const {
    std::cout << this->username << " " << this->password << " " << this->session;
}

char* Login::get_username() const {
    return this->username;
}
char* Login::get_password() const {
    return this->password;
}
int Login::get_session() const {
    return this->session;
}

char* Login::copy_char_array(const char* source) {
    int len = strlen(source);
    char* destination = new char[len + 1];
    stpcpy(destination, source);
    destination[len] = '\0';

    return destination;
}