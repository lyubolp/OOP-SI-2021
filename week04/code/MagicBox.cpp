//
// Created by lyubo on 18.03.21 г..
//

#include "MagicBox.hpp"


int* MagicBox::copy_array(const int* source, int size, int capacity) {
    int* result = new int[capacity];

    for(int i = 0; i < size; i++) {
        result[i] = source[i];
    }

    return result;
}

int MagicBox::generate_random_number(const int start, const int end) {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(start,end);

    return dist(rng);
}
MagicBox::MagicBox(): items(new int[1]), size(0), capacity(1) {}
MagicBox::MagicBox(const MagicBox& from) {
    this->copy_box(from);
}
MagicBox& MagicBox::operator=(const MagicBox& from) {
    if (this != &from) {
        delete[] this->items;
        this->copy_box(from);
    }
    return *this;
}
MagicBox::~MagicBox() {
    delete[] this->items;
}

void MagicBox::insert(const int new_item) {
    if (this->size == this->capacity) {
        this->capacity *= 2;
        int* bigger_box = MagicBox::copy_array(this->items, this->size, this->capacity);
        delete[] this->items;

        this->items = bigger_box;
    }
    this->items[this->size] = new_item;
    this->size += 1;
}
int MagicBox::remove() {
    int random_int = MagicBox::generate_random_number(0, this->size - 1);
    int* new_items = new int[this->capacity];

    int result = this->items[random_int];
    for(int i = 0; i < random_int; i++) {
        new_items[i] = this->items[i];
    }

    for(int i = random_int; i < this->size - 1; i++) {
        new_items[i] = this->items[i+1];
    }

    delete[] this->items;
    this->items = new_items;
    this->size -= 1;

    return result;
}

void MagicBox::copy_box(const MagicBox &from) {
    this->items = MagicBox::copy_array(from.items, from.size, from.capacity);
    this->size = from.size;
    this->capacity = from.capacity;
}

void MagicBox::print() const {
    for(int i = 0; i < this->size; i++) {
        std::cout << this->items[i] << " ";
    }
}