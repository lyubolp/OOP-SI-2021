//
// Created by lyubo on 28.05.21 г..
//

#ifndef CODE_MONSTERCARD_HPP
#define CODE_MONSTERCARD_HPP

#include "Card.hpp"

//5pts virtual inheritance
//3pts - const, const&, const this
class MonsterCard: virtual public Card {
public:
    MonsterCard();
    MonsterCard(const std::string& name, const unsigned id, const unsigned pic_id, const unsigned attack, const unsigned defence);

    //0.5pts per get/set

    unsigned get_attack() const;
    unsigned get_defence() const;

    void set_attack(const unsigned attack);
    void set_defence(const unsigned defence);

    //5pts code reuse in print()
    void print() const override;
    Card* clone() const;

protected:
    unsigned attack;
    unsigned defence;
};


#endif //CODE_MONSTERCARD_HPP
