//
// Created by lyubo on 10.03.21 г..
//

#ifndef CODE_LOGIN_HPP
#define CODE_LOGIN_HPP

/*
    Напишете клас Login, които съдържа потребителско име (char[] с динамичен размер), парола (char[]
отново динамичен размер) и тип на сесията (int).

    Напишете следните конструктори:
    Конструктор по подразбиране
    Конструктор, които приема един аргумент - потребителско име. При негово извикване,
потребителят да въведе парола. Сесията да е равна на 1
    Конструктор, които приема два аргумента - потребителско име и парола. Сесията да е равна на 1
    Конструктор с три аргумента
    Конструктор за копиране

 */
#include <cstring>
#include <iostream>

class Login {
public:
    Login();
    Login(const char* username);
    Login(const char* username, const char* password);
    Login(const char* username, const char* password, const int session);
    Login(const Login& from);

    void set_username(const char* new_username);
    void set_password(const char* new_password);
    void set_session(const int new_session);

    void print() const;
    char* get_username() const;
    char* get_password() const;
    int get_session() const;

private:
    char* copy_char_array(const char* source);

    char* username;
    char* password;
    int session;
};


#endif //CODE_LOGIN_HPP
