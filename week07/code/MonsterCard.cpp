//
// Created by lyubo on 8.04.21 г..
//

#include "MonsterCard.hpp"

MonsterCard::MonsterCard(): attack_points(0), defence_points(0) {
    this->name[0] = '\0';
}
MonsterCard::MonsterCard(const char* name, const unsigned attack_points, const unsigned defence_points) {
    this->attack_points = attack_points;
    this->defence_points = defence_points;
    this->set_name(name);
}

char const*  MonsterCard::get_name() const {
    return this->name;
}
unsigned MonsterCard::get_attack_points() const {
    return this->attack_points;
}
unsigned MonsterCard::get_defence_points() const {
    return this->defence_points;
}

void MonsterCard::set_name(const char* name)  {
    int len = strlen(name);

    for(int i = 0; i < len; i++) {
        this->name[i] = name[i];
    }
}
void MonsterCard::set_attack_points(const unsigned attack_points) {
    this->attack_points = attack_points;
}
void MonsterCard::set_defence_points(const unsigned defence_points) {
    this->defence_points = defence_points;
}