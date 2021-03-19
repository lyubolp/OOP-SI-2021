#include <iostream>
#include "DynamicArray.hpp"
#include "Rational.hpp"
#include "MagicBox.hpp"
int main() {
    /*DynamicArray first;

    first.append(1);
    first.append(2);
    first.append(3); //3;4

    //std::cout << first.get(0) << std::endl;
    std::cout << first.operator[](0) << std::endl;
    DynamicArray second(first);

    DynamicArray third;
    third = first;

    first.append(4);

    first.print_memory();
    std::cout << std::endl; //1 2 3 4

    second.print_memory();
    std::cout << std::endl; //1 2 3 0

    third.print_memory();
    std::cout << std::endl; //1 2 3 0*/


   /* Rational first(3, 5);
    Rational second(2, 3);

    Rational result = first * second;

    std::cout << result.to_string() << std::endl;*/

   MagicBox mg;
   mg.insert(2);
   mg.insert(3);
   mg.insert(8);
   mg.insert(7);
   mg.insert(1);

   std::cout << mg.remove() << std::endl;

   mg.print();
    return 0;
}
