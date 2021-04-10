#include <iostream>
#include <cstring>
#include "pair.hpp"
#include "double_typed_pair.hpp"
/*
 0x08 0x09  0x0a 0x0b  0x0c
  0    3     6     9    12
  a   ptr
 */

void print_array(const int* array, const int size) {
    for(int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}

/*int* deep_copy(const int* array, const int size) {
    int* result = new int[size];
    for(int i = 0; i < size; i++) {
        result[i] = array[i];
    }

    return result;
}*/

/*class DynamicMemoryHolder {
public:
    DynamicMemoryHolder() {
        std::cout << "Constructor called\n";
        this->some_dynamic_values = new int[3];
        this->size = 3;
    }

    DynamicMemoryHolder(const DynamicMemoryHolder& from) {
        std::cout << "Copy()\n";
        this->some_dynamic_values = new int[from.size];

        for(int i = 0; i < this->size; i++) {
            this->some_dynamic_values[i] = from.some_dynamic_values[i];
        }
    }

    DynamicMemoryHolder& operator=(const DynamicMemoryHolder& from) {
        std::cout << "Operator=\n";
        if (this != &from){
            delete[] this->some_dynamic_values;
            this->some_dynamic_values = new int[from.size];

            for(int i = 0; i < this->size; i++) {
                this->some_dynamic_values[i] = from.some_dynamic_values[i];
            }
        }
        return *this;

    }
    void set_dynamic_values(const int* new_values) {
        delete[] this->some_dynamic_values;
        this->some_dynamic_values = new int[this->size];

        for(int i = 0; i < this->size; i++) {
            this->some_dynamic_values[i] = new_values[i];
        }
    }

    int* get_dynamic_values() const {
        return this->some_dynamic_values;
    }

    ~DynamicMemoryHolder() {
        std::cout << "Destructor called\n";
        delete[] this->some_dynamic_values;
    }
private:
    int* some_dynamic_values;
    int size;
};

void foo(const DynamicMemoryHolder bar) {
    //std::cout << "2.5\n";
    bar.get_dynamic_values();
}*/
int main() {
    /*int* heap_memory = new int[5];

    for(int i = 0; i < 5; i++) {
        heap_memory[i] = 3 * i;
    }

    int* copy_of_heap_memory = deep_copy(heap_memory, 5);

    heap_memory[1] = -1;
    print_array(heap_memory, 5);
    std::cout << std::endl;
    print_array(copy_of_heap_memory, 5);

    delete[] heap_memory;
    delete[] copy_of_heap_memory;*/

    /*std::cout << "1\n";
    DynamicMemoryHolder temp;
    std::cout << "2\n";

    foo(temp);
    std::cout << "3\n";*/

    /*Pair<int> first = Pair<int>(3, 5);
    Pair<int> second = Pair<int>(3, 4);

    std::cout << (first != second) << std::endl;*/

    DoubleTypedPair<int, double> first = DoubleTypedPair<int, double>(3, 3.14);

    return 0;
}
