//
// Created by lyubo on 28.05.21 г..
//

#include "MagicCard.hpp"

MagicCard::MagicCard(const std::string& name, const unsigned id, const unsigned pic_id, const std::string& effect): Card(name, id, pic_id), effect(effect) {}

std::string MagicCard::get_effect() const {
    return this->effect;
}

void MagicCard::set_effect(const std::string& effect) {
    this->effect = effect;
}

void MagicCard::print() const {
    this->Card::print();
    std::cout << this->effect;
}
Card* MagicCard::clone() const {
    return new MagicCard(*this);
}