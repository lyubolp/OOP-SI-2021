//
// Created by lyubo on 28.05.21 г..
//

#ifndef CODE_MAGICCARD_HPP
#define CODE_MAGICCARD_HPP

#include "Card.hpp"

class MagicCard: virtual public Card{
public:
    MagicCard() = default;
    MagicCard(const std::string& name, const unsigned id, const unsigned pic_id, const std::string& effect);

    std::string get_effect() const;

    void set_effect(const std::string& effect);

    void print() const override;
    Card* clone() const;

protected:
    std::string effect;
};


#endif //CODE_MAGICCARD_HPP
