//
// Created by lyubo on 28.05.21 г..
//

#ifndef CODE_DECK_HPP
#define CODE_DECK_HPP

#include "Card.hpp"
#include "MonsterCard.hpp"
#include "MagicCard.hpp"
#include "SpecialCard.hpp"
#include <vector>

class Deck {
public:
    void add_card(const MonsterCard& card);
    void add_card(const MagicCard& card);
    void add_card(const SpecialCard& card);

    void print() const;

    static Deck* get_instance();
private:
    static Deck* instance;
    Deck() = default;
    ~Deck();
    std::vector<Card*> cards;
};


#endif //CODE_DECK_HPP
