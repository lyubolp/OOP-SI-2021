//
// Created by lyubo on 8.04.21 г..
//

#ifndef WEEK07_DUELIST_HPP
#define WEEK07_DUELIST_HPP

#include <cstring>
#include "Deck.hpp"

class Duelist {
public:
    Duelist();
    Duelist(const char* name);
    Duelist(const Duelist& from);
    Duelist& operator=(const Duelist& from);
    ~Duelist();

    int get_magic_cards_count() const;
    int get_monster_cards_count() const;

    void add_magic_card(const MagicCard& card);
    void add_monster_card(const MonsterCard& card);

    void change_magic_card(const MagicCard& card, const int index);
    void change_monster_card(const MonsterCard& card, const int index);
private:
    void copy_duelist(const Duelist& from);
    static char* copy_char_array(const char* source);

    char* name;
    Deck deck;
};


#endif //WEEK07_DUELIST_HPP
