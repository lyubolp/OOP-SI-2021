//
// Created by lyubo on 25.03.21 г..
//

#ifndef WEEK05_DATABASE_HPP
#define WEEK05_DATABASE_HPP

#include "User.hpp"
#include <vector>
/*
 * Даден е клас Database, съдържащ следните характеристики:

    Множество потребители
    Метод за търсене по Идентификационен номер
    Метод за търсене по Потребителско име

 */

class Database {
public:
    Database() = default;

    void add_user(const User& to_add);

    std::pair<bool, User> search_by_id(const std::string& id);
    std::pair<bool, User> search_by_username(const std::string& username);
private:
    std::vector<User> users;
};


#endif //WEEK05_DATABASE_HPP
