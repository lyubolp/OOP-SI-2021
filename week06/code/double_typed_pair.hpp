//
// Created by lyubo on 1.04.21 г..
//

#ifndef CODE_DOUBLE_TYPED_PAIR_HPP
#define CODE_DOUBLE_TYPED_PAIR_HPP
template <typename T, typename S>

class DoubleTypedPair{
public:
    DoubleTypedPair();
    DoubleTypedPair(const T& first, const S& second);

    T get_first() const;
    S get_second() const;

    void set_first(const T& first);
    void set_second(const S& second);

    bool operator==(const DoubleTypedPair<T, S>& other);
    bool operator!=(const DoubleTypedPair<T, S>& other);
private:
    T first;
    S second;
};

template <typename T, typename S>
DoubleTypedPair<T, S>::DoubleTypedPair(): first(T()), second(S()) {
}

template <typename T, typename S>
DoubleTypedPair<T, S>::DoubleTypedPair(const T& first, const S& second): first(first), second(second) {}

template <typename T, typename S>
T DoubleTypedPair<T, S>::get_first() const {
    return this->first;
}

template <typename T, typename S>
S DoubleTypedPair<T, S>::get_second() const {
    return this->second;
}

template <typename T, typename S>
void DoubleTypedPair<T, S>::set_first(const T& first) {
    this->first = first;
}

template <typename T, typename S>
void DoubleTypedPair<T, S>::set_second(const S& second) {
    this->second = second;
}

/*template <typename T, typename S>
bool DoubleTypedPair<T, S>::operator==(const DoubleTypedPair<T, S>& other) {
    return this->first == other.first && this->second == other.second;
}

template <typename T, typename S>
bool DoubleTypedPair<T, S>::operator!=(const DoubleTypedPair<T, S>& other) {
    return this->first != other.first || this->second != other.second;
}*/

template<typename T, typename S>
inline bool DoubleTypedPair<T, S>::operator==(const DoubleTypedPair<T, S>& other) {
    return (this->T == other.T) && (this->S == other.S);
}

template<typename T, typename S>
inline bool DoubleTypedPair<T, S>::operator!=(const DoubleTypedPair<T, S>& other) {
    return !(*this == other);
}
#endif //CODE_DOUBLE_TYPED_PAIR_HPP
