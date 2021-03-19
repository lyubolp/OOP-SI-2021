//
// Created by lyubo on 11.03.21 г..
//

#include "LicenceKey.hpp"

LicenceKey::LicenceKey() {
    this->activations_left = new int(this->MAX_ACTIVATIONS);

    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(10000000, 99999999); // define the range
    this->key = distr(gen);
}
LicenceKey::LicenceKey(const LicenceKey& from) {
    this->key = from.key;
    *this->activations_left -= 1;
}
int LicenceKey::activate() const {
    if (*this->activations_left > 0) {
        *this->activations_left -= 1;
        return this->key;
    }
    else {
        return -1;
    }
}