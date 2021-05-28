//
// Created by lyubo on 28.05.21 г..
//

#include "SpecialCard.hpp"

SpecialCard::SpecialCard(): level(0) {}

unsigned SpecialCard::get_level() const {
    return this->level;
}
void SpecialCard::set_level(const unsigned level) {
    this->level = level;
}

void SpecialCard::print() const{
    this->Card::print();
    std::cout << this->attack << " " << this->defence << this->effect << std::endl;
}

Card* SpecialCard::clone() const{
    return new SpecialCard(*this);
}