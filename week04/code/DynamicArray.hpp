//
// Created by lyubo on 17.03.21 г..
//

#ifndef CODE_DYNAMICARRAY_HPP
#define CODE_DYNAMICARRAY_HPP

#include <iostream>
class DynamicArray {
public:
    DynamicArray();
    DynamicArray(const DynamicArray& from);
    DynamicArray& operator=(const DynamicArray& from);
    ~DynamicArray();

    void append(const int item);
    int get(const int index) const;
    int get_length() const;

    int operator[](const int index);

    void print_memory() const {
        for(int i = 0; i < this->capacity; i++) {
            std::cout << this->content[i] << " ";
        }
    }
private:
    int* content;
    int length; // Колко елемента имаме
    int capacity; //Колко памет сме заделили
};


#endif //CODE_DYNAMICARRAY_HPP
