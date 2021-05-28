//
// Created by lyubo on 28.05.21 г..
//

#include "Card.hpp"

Card::Card(): id(0), pic_id(0) {}
Card::Card(const std::string& name, const unsigned id, const unsigned pic_id): name(name), id(id), pic_id(pic_id) {}

std::string Card::get_name() const {
    return this->name;
}
unsigned Card::get_id() const {
    return this->id;
}
unsigned Card::get_pic_id() const {
    return this->pic_id;
}

void Card::set_name(const std::string& name) {
    this->name = name;
}
void Card::set_id(const unsigned id) {
    this->id = id;
}
void Card::set_pic_id(const unsigned pic_id) {
    this->pic_id = pic_id;
}

void Card::print() const {
    std::cout << this->name << " " << this->id << " " << this->pic_id << " ";
}