//
// Created by lyubo on 8.04.21 г..
//

#include "MagicCard.hpp"

MagicCard::MagicCard() {
    this->name[0] = '\0';
    this->effect[0] = '\0';
    this->type = MagicCardType::Buff;
}
MagicCard::MagicCard(const char* name, const char* effect, const MagicCardType& type) {

}

char const* MagicCard::get_name() const {
    return this->name;
}
char const* MagicCard::get_effect() const {
    return this->effect;
}
MagicCard::MagicCardType MagicCard::get_type() const {
    return this->type;
}

void MagicCard::set_name(const char* name) {
    int length = strlen(name);

    for(int i = 0; i < length; i++) {
        this->name[i] = name[i];
    }
}
void MagicCard::set_effect(const char* effect) {
    int length = strlen(effect);

    for(int i = 0; i < length; i++) {
        this->effect[i] = effect[i];
    }
}
void MagicCard::set_type(const MagicCardType& type) {
    this->type = type;
}