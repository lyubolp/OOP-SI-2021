//
// Created by lyubo on 8.04.21 г..
//

#ifndef WEEK07_MONSTERCARD_HPP
#define WEEK07_MONSTERCARD_HPP
#include <cstring>

class MonsterCard {
public:
    MonsterCard();
    MonsterCard(const char* name, const unsigned attack_points, const unsigned defence_points);

    char const* get_name() const;
    unsigned get_attack_points() const;
    unsigned get_defence_points() const;

    void set_name(const char* name);
    void set_attack_points(const unsigned attack_points);
    void set_defence_points(const unsigned defence_points);
private:
    char name[20];
    unsigned int attack_points;
    unsigned int defence_points;
};


#endif //WEEK07_MONSTERCARD_HPP
