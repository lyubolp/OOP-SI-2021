//
// Created by lyubo on 25.03.21 г..
//

#include "Database.hpp"


void Database::add_user(const User& to_add) {
    this->users.push_back(to_add);
}

std::pair<bool, User> Database::search_by_id(const std::string& id) {
    for(const User& user: this->users) {
        if (user.get_id() == id) {
            return std::pair<bool, User>(true, user);
        }
    }
    return std::pair<bool, User>(false, User());
}
std::pair<bool, User> Database::search_by_username(const std::string& username) {
    for(const User& user: this->users) {
        if (user.get_username() == username) {
            return std::pair<bool, User>(true, user);
        }
    }
    return std::pair<bool, User>(false, User());
}