//
// Created by lyubo on 11.03.21 г..
//

#ifndef CODE_LICENCEKEY_HPP
#define CODE_LICENCEKEY_HPP

/*
 * Даден е клас LicenceKey, който пази в себе си "ключ" (цяло, 8 цифрено число) и брой допустими копия.
 * LicenceKey има метод activate(), който връща "ключа", стига той да не е копиран повече от допустимия брой пъти.
 * Ако допустимия брой пъти е достигнат, да се връща -1.
 */

#include <random>

class LicenceKey {
public:
    LicenceKey();
    LicenceKey(const LicenceKey& from);
    int activate() const;
private:
    const int MAX_ACTIVATIONS = 3;
    int* activations_left;
    int key;
};


#endif //CODE_LICENCEKEY_HPP
