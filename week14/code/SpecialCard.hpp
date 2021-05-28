//
// Created by lyubo on 28.05.21 г..
//

#ifndef CODE_SPECIALCARD_HPP
#define CODE_SPECIALCARD_HPP

#include "MonsterCard.hpp"
#include "MagicCard.hpp"

class SpecialCard: public MonsterCard, public MagicCard{
public:
    SpecialCard();
    //constructor with arguments

    unsigned get_level() const;
    void set_level(const unsigned level);

    void print() const override;
    Card* clone() const override;
private:
    unsigned level;
};


#endif //CODE_SPECIALCARD_HPP
