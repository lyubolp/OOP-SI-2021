#include <iostream>
#include "DynamicArray.hpp"

#include "some_random_functions.h"
/*template <typename T, typename S>
class Pair {
public:
    Pair() {
        this->key = T();
        this->value = S();
    }
    Pair(const T& key, const S& value) {
        this->key = key;
        this->value = value;
    }

    T get_key() const {
        return this->key;
    }

    S get_value() const {
        return this->value;
    }
    void set_pair(const T& key, const S& value);
private:
    T key;
    S value;
};

template <typename T, typename S>
void Pair<T,S>::set_pair(const T &key, const S &value) {
    this->key = key;
    this->value = value;
}*/

class Foo{
public:
    Foo(const int content = 0) {
        this->content = content;
    }


    int get_content() const {
        return this->content;
    }
private:
    int content;
};
template <typename T>
T add(const T& first, const T& second) {
    return first + second;
}

int main() {
    /*Pair<std::string, int> myPair;
    myPair.get_value();*/

    /*DynamicArray<int> intArray;
    for(int i = 0; i < 5; i++) {
        intArray.append(i);
    }
    std::cout << "intArray.print() = " << intArray.print() << std::endl;

    DynamicArray<double> doubleArray;
    for(int i = 0; i < 5; i++) {
        doubleArray.append(i + 0.1 * i);
    }

    std::cout << "doubleArray.print() = " << doubleArray.print() << std::endl;

    DynamicArray<std::string> stringArray;

    for(int i = 0; i < 5; i++) {
        stringArray.append("Hello, my value is " + std::to_string(i));
    }

    std::cout << "stringArray.print() = " << stringArray.print() << std::endl;*/

    std::cout << add<int>(3, 5) << std::endl;
    std::cout << add<double>(3.2, 5.4) << std::endl;

    Foo result = add<Foo>(Foo(3), Foo(2));

    std::cout << result.get_content() << std::endl;


    return 0;
}
