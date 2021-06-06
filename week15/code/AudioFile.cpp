//
// Created by lyubo on 3.06.21 г..
//

#include "AudioFile.hpp"

AudioFile::AudioFile(): length(0) {}
AudioFile::AudioFile(const std::string& name, const std::string& extension, const unsigned size, const unsigned length, const std::string& artist): MultimediaFile(name, extension, size), length(length), artist(artist) {}

unsigned AudioFile::get_length() const {
    return this->length;
}
std::string AudioFile::get_artist() const {
    return this->artist;
}

void AudioFile::set_length(const unsigned length) {
    this->length = length;
}
void AudioFile::set_artist(const std::string& artist) {
    this->artist = artist;
}

MultimediaFile* AudioFile::clone() const {
    return new AudioFile(*this);
}
void AudioFile::play() const {
    this->MultimediaFile::play();
    std::cout << " " << this->length << " " << this->artist << std::endl;
}