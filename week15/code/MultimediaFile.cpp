//
// Created by lyubo on 3.06.21 г..
//

#include "MultimediaFile.hpp"
MultimediaFile::MultimediaFile(): size(0) {}
MultimediaFile::MultimediaFile(const std::string& name, const std::string& extension, const unsigned size): name(name), extension(extension), size(size) {}

std::string MultimediaFile::get_name() const {
    return this->name;
}
std::string MultimediaFile::get_extension() const {
    return this->extension;
}
unsigned MultimediaFile::get_size() const {
    return this->size;
}

void MultimediaFile::set_name(const std::string& new_name) {
    this->name = new_name;
}
void MultimediaFile::set_extension(const std::string& new_extension) {
    this->extension = new_extension;
}
void MultimediaFile::set_size(const unsigned new_size) {
    this->size = new_size;
}

void MultimediaFile::play() const {
    std::cout << this->name << " " << this->extension << " " << this->size;
}