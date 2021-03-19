#include <iostream>
#include "timestamp.hpp"
#include "foo_dynamic.hpp"
#include "Login.hpp"
#include "Line.hpp"
int main() {
    Login temp("lyubo", "pass", 1);
    temp.set_username("Lyubo");

    std::cout << "Username is: " << temp.get_username() << std::endl;
    return 0;
}
