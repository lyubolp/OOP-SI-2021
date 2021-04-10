#include <iostream>
#include "Person.hpp"
#include <fstream>
#include "Date.hpp"
int main() {
    std::ifstream read_from_file("someTextFile.txt", std::ios::in);

    read_from_file.seekg(3);
    char c;
    int size = 0;
    std::string content;
    if(read_from_file.is_open()) {
        while(read_from_file.get(c)){
            content += c;
        }
        if (size < read_from_file.tellg()) {
            size = read_from_file.tellg();
        }
    }
    read_from_file.close();
    std::cout << "Size of file is: " << size << std::endl;
    std::cout << content;

    /*
     * std::ios::out
     * std::ios::ate
     * std::ios::app
     * std::ios::trunc
     * std::ios::binary
     */
    std::ofstream write_to_file("someTextFile2.txt", std::ios::app);

    if(write_to_file.is_open()) {
        write_to_file << "\n123";

        std::cout << "Wrote to the file !\n";
    }
    else {
        std::cout << "File could not be opened !";
    }

    write_to_file.close();


    return 0;
}
