//
// Created by lyubo on 18.03.21 г..
//

#ifndef CODE_MAGICBOX_HPP
#define CODE_MAGICBOX_HPP

#include <random>
#include <iostream>
class MagicBox {
public:
    MagicBox();
    MagicBox(const MagicBox& from);
    MagicBox& operator=(const MagicBox& from);
    ~MagicBox();

    void insert(const int new_item);
    int remove();

    void print() const;
private:
    static int* copy_array(const int* source, int size, int capacity);
    static int generate_random_number(const int start, const int end);
    void copy_box(const MagicBox& from);
    int* items;
    int size;
    int capacity;
};


#endif //CODE_MAGICBOX_HPP
