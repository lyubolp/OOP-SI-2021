#include <iostream>

#include <vector>
#include <string>
//pair

int main() {
    /*Car car;

    std::cout << car.get_wheel_rotation() << std::endl;
    car.steer_left(5);
    std::cout << car.get_wheel_rotation() << std::endl;*/

    /*StaticExample::print_amount_of_instances();

    strFunctions::copy_char_array("asd");*/

    /*std::vector<int> myVector;
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);
    myVector.push_back(6);
    myVector.push_back(7);
    myVector.push_back(8);


    for(int item : myVector) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    myVector.insert(myVector.begin() + 4, -1);

    for(int item : myVector) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    myVector.erase(myVector.begin() + 2);

    for(int item : myVector) {
        std::cout << item << " ";
    }
    std::cout << std::endl;*/


    /*std::string myName = "asd";

    for(int i = 0; i < myName.size(); i++) {
        std::cout << myName[i] << std::endl;
    }

    std::cout << myName.length() << std::endl;

    myName.append("asd");
    std::cout << myName << std::endl;

    myName.push_back('!');
    std::cout << myName << std::endl;*/

    std::pair<std::string, int> myPair;

    myPair.first = "asd";
    myPair.second = 5;


    return 0;
}
