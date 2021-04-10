//
// Created by lyubo on 8.04.21 г..
//

#include "Duelist.hpp"

Duelist::Duelist() {
    this->name = new char[1];
    this->name[0] = '\0';
}
Duelist::Duelist(const char* name) {
    this->name = Duelist::copy_char_array(name);
}
Duelist::Duelist(const Duelist& from) {
    this->copy_duelist(from);
}
Duelist& Duelist::operator=(const Duelist& from) {
    if(this != &from) {
        delete[] this->name;
        this->copy_duelist(from);
    }
    return *this;
}
Duelist::~Duelist() {
    delete[] this->name;
}

int Duelist::get_magic_cards_count() const {
    this->deck.get_magic_cards_count();
}
int Duelist::get_monster_cards_count() const {
    this->deck.get_monster_cards_count();
}

void Duelist::add_magic_card(const MagicCard& card) {
    this->deck.add_magic_card(card);
}
void Duelist::add_monster_card(const MonsterCard& card) {
    this->deck.add_monster_card(card);
}

void Duelist::change_magic_card(const MagicCard& card, const int index) {
    this->deck.change_magic_card(card, index);
}
void Duelist::change_monster_card(const MonsterCard& card, const int index) {
    this->deck.change_monster_card(card, index);
}

void Duelist::copy_duelist(const Duelist& from) {
    this->name = Duelist::copy_char_array(from.name);
    this->deck = from.deck;
}
char* Duelist::copy_char_array(const char* source) {
    int length = strlen(source);

    char* result = new char[length + 1];
    strcpy(result, source);
    result[length] = '\0';

    return result;
}