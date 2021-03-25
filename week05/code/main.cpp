#include <iostream>

#include <vector>
#include <string>

#include <random>
#include "Safe.hpp"
#include "User.hpp"
//pair

int hacker(const Safe& instance) {
    return instance.secret_num;
}

int generate_random_number(const int start, const int end) {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(start,end);

    return dist(rng);
}

int return_5() {
    return 5;
}

int return_6() {
    return 6;
}

int add(int first, int second) {
    return first + second;
}

int subtract(int first, int second) {
    return first - second;
}

int apply(int a, int b, int (*func)(int, int)) {
    return func(a, b);
}

// type (*name)(args)
int add_5_to_num(int num, int (*func)()) {
    return num + func();
}
int main() {
    /*std::cout << apply(3, 5, add);*/
    /*Car car;

    std::cout << car.get_wheel_rotation() << std::endl;
    car.steer_left(5);
    std::cout << car.get_wheel_rotation() << std::endl;*/

    StaticExample::print_amount_of_instances();

    /*strFunctions::copy_char_array("asd");*/

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

    /*std::pair<std::string, int> myPair;

    myPair.first = "one";
    myPair.second = 1;

    std::vector<std::pair<std::vector<int>, int>> numbers;

    numbers.push_back(std::pair<std::string, int>("one", 1));
    numbers.push_back(std::pair<std::string, int>("two", 2));
    numbers.push_back(std::pair<std::string, int>("three", 3));
    numbers.push_back(std::pair<std::string, int>("four", 4));

    for(auto& item: numbers) {
        if (item.second == 2) {
            std::cout << item.first;
        }
    }*/

    /*int random_number = generate_random_number(0, 20);
    std::cout << "This is the number generated: " << random_number << std::endl;
    Safe mySafe(random_number);

    std::cout << "This is the number taken from the Safe: " << hacker(mySafe) << std::endl;*/


    User first("lyubo", "qseasd");
    std::cout << first.get_id() << std::endl;

    User second("gosho", "gosho");
    std::cout << second.get_id() << std::endl;
    return 0;
}
