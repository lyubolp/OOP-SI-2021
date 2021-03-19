//
// Created by lyubo on 18.03.21 г..
//

#ifndef CODE_LAPTOP_HPP
#define CODE_LAPTOP_HPP

#include "cpu.hpp"
#include <iostream>
/*
 * Напишете клас Laptop. Един лаптоп се нуждае от марка и модел (стринг с произволна дължина),
 * цена, размер на екрана (в инчове), процесор
 *  (помислете как да представите процесора с нужните му характеристики - тактова честота,
 *  брой ядра и размер на КЕШ паметта), РАМ памет и капацитет на батерията.
 *  Напишете следните специални методи:

    Конструктор по подразбиране
    Конструктор за копиране
    Конструктор(и) с параметри, данните за един лаптоп
    Оператор за присвояване
    Деструктор
    Оператори <, >, ==, != за сравнение на размерите на екраните на два лаптопа

    Напишете подходящи методи за upgrade на процесора и РАМ-а, както и метод за подходящо принтиране на информацията.
 */

#include <cstring>
class Laptop {
public:
    Laptop();
    Laptop(const char* maker, const char* model, const double& price, const double& display_size, const cpu& processor, const double& ram, const int battery_capacity);
    Laptop(const Laptop& from);
    Laptop& operator=(const Laptop& from);
    ~Laptop();

    bool operator<(const Laptop& to) const;
    bool operator>(const Laptop& to) const;
    bool operator==(const Laptop& to) const ;
    bool operator!=(const Laptop& to) const ;

    void upgrade_ram(const double& new_ram_size);
    void upgrade_cpu(const cpu& new_cpu);

    void print() const;
private:
    static char* copy_char_array(const char* source);
    void copy_laptop(const Laptop& from);

    char* maker;
    char* model;
    double price;
    double display_size;
    cpu processor;
    double RAM;
    int battery_capacity;
};


#endif //CODE_LAPTOP_HPP
