//
// Created by lyubo on 3.06.21 г..
//

#include "Stream.hpp"

Stream::Stream(const std::string& source): MultimediaFile(), source(source) {}

std::string Stream::get_source() const {
    return this->source;
}
void Stream::set_source(const std::string& source) {
    this->source = source;
}

MultimediaFile* Stream::clone() const {
    return new Stream(*this);
}
void Stream::play() const {
    std::cout << this->source << std::endl;
}