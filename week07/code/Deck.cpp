//
// Created by lyubo on 8.04.21 г..
//

#include "Deck.hpp"

Deck::Deck(): free_index_magic_cards(0), free_index_monster_cards(0) {}

int Deck::get_magic_cards_count() const {
    return this->free_index_magic_cards;
}
int Deck::get_monster_cards_count() const {
    return this->free_index_monster_cards;
}

void Deck::add_magic_card(const MagicCard& card) {
    if(this->free_index_magic_cards < Deck::MAX_CARDS) {
        this->magic_cards[this->free_index_magic_cards] = card;
        this->free_index_magic_cards += 1;
    }
}
void Deck::add_monster_card(const MonsterCard& card) {
    if (this->free_index_monster_cards < Deck::MAX_CARDS) {
        this->monster_cards[this->free_index_monster_cards] = card;
        this->free_index_monster_cards += 1;
    }
}

void Deck::change_magic_card(const MagicCard& card, const int index) {
    if (0 <= index && index < this->free_index_magic_cards) {
        this->magic_cards[index] = card;
    }
}
void Deck::change_monster_card(const MonsterCard& card, const int index) {
    if (0 <= index && index < this->free_index_monster_cards) {
        this->monster_cards[index] = card;
    }
}