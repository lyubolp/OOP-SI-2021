#include <iostream>
#include "timestamp.hpp"
#include "foo_dynamic.hpp"
#include "Login.hpp"
int main() {
    /*foo_dynamic first;
    // first -> some_value: 0xa -> 0

    foo_dynamic second(first);
    // first -> some_value: 0xa -> 0
    // second -> some_value: 0xb -> 0

    std::cout << first.get_value() << " " << second.get_value() << std::endl;

    first.set_value(3);
    // first -> some_value: 0xa -> 3
    // second -> some_value: 0xb -> 0

    std::cout << first.get_value() << " " << second.get_value() << std::endl;*/

    Login temp("lyubo", "pass", 1);

    temp.set_username("Lubo");


    return 0;
}
