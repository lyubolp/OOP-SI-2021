//
// Created by lyubo on 28.05.21 г..
//

#include "Deck.hpp"

void Deck::add_card(const MonsterCard& card) {
    this->cards.push_back(card.clone());
}
void Deck::add_card(const MagicCard& card) {
    this->cards.push_back(card.clone());
}
void Deck::add_card(const SpecialCard& card) {
    this->cards.push_back(card.clone());
}

void Deck::print() const {
    for(const Card* card: this->cards) {
        card->print();
    }
}

Deck* Deck::get_instance() {
    if(Deck::instance == nullptr) {
        Deck::instance = new Deck();
    }
    return Deck::instance;
}
Deck::~Deck() {
    for(const Card* card: this->cards) {
        delete card;
    }
    delete Deck::instance;
}

Deck* Deck::instance = nullptr;