//
// Created by lyubo on 28.05.21 г..
//

#ifndef CODE_CARD_HPP
#define CODE_CARD_HPP

#include <iostream>
#include <string>

//3pts - const, const&, const this

class Card {
public:
    Card();
    Card(const std::string& name, const unsigned id, const unsigned pic_id);

    //0.5pts per get/set

    std::string get_name() const;
    unsigned get_id() const;
    unsigned get_pic_id() const;

    void set_name(const std::string& name);
    void set_id(const unsigned id);
    void set_pic_id(const unsigned pic_id);

    virtual void print() const; //5pts

    virtual Card* clone() const = 0;
    virtual ~Card() = default; //5pts

protected:
    std::string name;
    unsigned id;
    unsigned pic_id;
};


#endif //CODE_CARD_HPP
