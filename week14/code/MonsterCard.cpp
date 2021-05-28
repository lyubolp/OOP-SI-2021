//
// Created by lyubo on 28.05.21 г..
//

#include "MonsterCard.hpp"

MonsterCard::MonsterCard(): Card(), attack(0), defence(0) {}
MonsterCard::MonsterCard(const std::string& name, const unsigned id, const unsigned pic_id, const unsigned attack, const unsigned defence): Card(name, id, pic_id), attack(attack), defence(defence) {}

unsigned MonsterCard::get_attack() const {
    return this->attack;
}
unsigned MonsterCard::get_defence() const {
    return this->defence;
}

void MonsterCard::set_attack(const unsigned attack) {
    this->attack = attack;
}
void MonsterCard::set_defence(const unsigned defence) {
    this->defence = defence;
}

void MonsterCard::print() const {
    this->Card::print();
    std::cout << this->attack << " " << this->defence << std::endl;
}
Card* MonsterCard::clone() const {
    return new MonsterCard(*this);
}