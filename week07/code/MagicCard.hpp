//
// Created by lyubo on 8.04.21 г..
//

#ifndef WEEK07_MAGICCARD_HPP
#define WEEK07_MAGICCARD_HPP

#include <cstring>
class MagicCard {
public:
    enum class MagicCardType {
        Trap,
        Buff,
        Spell
    };

public:
    MagicCard();
    MagicCard(const char* name, const char* effect, const MagicCardType& type);

    char const* get_name() const;
    char const* get_effect() const;
    MagicCardType get_type() const;

    void set_name(const char* name);
    void set_effect(const char* effect);
    void set_type(const MagicCardType& type);
private:
    char name[20];
    char effect[100];
    MagicCardType type;
};


#endif //WEEK07_MAGICCARD_HPP
