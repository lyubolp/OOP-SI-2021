//
// Created by lyubo on 8.04.21 г..
//

#ifndef WEEK07_DECK_HPP
#define WEEK07_DECK_HPP

#include "MonsterCard.hpp"
#include "MagicCard.hpp"

class Deck {
public:
    Deck();

    int get_magic_cards_count() const;
    int get_monster_cards_count() const;

    void add_magic_card(const MagicCard& card);
    void add_monster_card(const MonsterCard& card);

    void change_magic_card(const MagicCard& card, const int index);
    void change_monster_card(const MonsterCard& card, const int index);
private:
    const static int MAX_CARDS = 20;

    MonsterCard monster_cards[MAX_CARDS];
    int free_index_monster_cards;

    MagicCard magic_cards[MAX_CARDS];
    int free_index_magic_cards;
};


#endif //WEEK07_DECK_HPP
