//
// Created by lyubo on 1.04.21 г..
//

#ifndef CODE_PAIR_HPP
#define CODE_PAIR_HPP

// Реализирайте клас наредена двойка (Pair), който съдържа две променливи от произволен тип.
// Напишете конструктор с параметри, get-ъри и set-ъри за атрибутите на класа,
// както и метод, който връща максималния елемент от наредената двойка.
// Предефинирайте операторите == и != за Pair.

template <typename T>

class Pair{
public:
    Pair();
    Pair(const T& first, const T& second);

    T get_first() const;
    T get_second() const;

    void set_first(const T& first);
    void set_second(const T& second);

    T max() const;

    bool operator==(const Pair<T>& other);
    bool operator!=(const Pair<T>& other);
private:
    T first;
    T second;
};

template <typename T>
Pair<T>::Pair(): first(T()), second(T()) {
}

template <typename T>
Pair<T>::Pair(const T& first, const T& second): first(first), second(second) {}

template <typename T>
T Pair<T>::get_first() const {
    return this->first;
}

template <typename T>
T Pair<T>::get_second() const {
    return this->second;
}

template <typename T>
void Pair<T>::set_first(const T& first) {
    this->first = first;
}

template <typename T>
void Pair<T>::set_second(const T& second) {
    this->second = second;
}

template <typename T>
T Pair<T>::max() const {
    if (this->first >= this->second) {
        return this->first;
    }
    return this->second;
}

template <typename T>
bool Pair<T>::operator==(const Pair<T>& other) {
    return this->first == other.first && this->second == other.second;
}

template <typename T>
bool Pair<T>::operator!=(const Pair<T>& other) {
    return !(*this == other);
}
#endif //CODE_PAIR_HPP
