//
// Created by lyubo on 25.03.21 г..
//

#ifndef WEEK05_USER_HPP
#define WEEK05_USER_HPP

#include <string>
/*
 * Даден е клас User, съдържащ следните характеристики:

    Потребителско име (минимална дължина - 4 символа)
    Парола
    Идентификационен номер - генерира се автоматично, на база на първите 4 символа от потребителското име + поредния номер на акаунта в системата
    Метод login(), който приема парола и проверява дали тази парола съвпада с потребителската парола

 */
class User {
public:
    User();
    User(const std::string& username, const std::string& password);
    bool login(const std::string& password);

    std::string get_id() const;
    std::string get_username() const;
private:
    static int counter;

    static std::string generate_id(const std::string& username);
    std::string username;
    std::string password;
    std::string id;
};


#endif //WEEK05_USER_HPP
