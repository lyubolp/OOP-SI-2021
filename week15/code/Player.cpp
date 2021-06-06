//
// Created by lyubo on 3.06.21 г..
//

#include "Player.hpp"

Player::Player(const Player& from) {
    this->copy_from(from.files);
}
Player& Player::operator=(const Player& from) {
    if(this != &from) {
        this->clear_files();
        this->copy_from(from.files);
    }
    return *this;
}

Player::~Player() {
    this->clear_files();
}

void Player::add_audio_file(const AudioFile& file) {
    this->files.push_back(file.clone());
}
void Player::add_video_file(const VideoFile& file) {
    this->files.push_back(file.clone());
}
void Player::add_stream(const Stream& file) {
    this->files.push_back(file.clone());
}
void Player::remove(const int index) {
    this->files.erase(this->files.begin() + index);
}

void Player::play(const int index) const {
    auto* file_as_audio = dynamic_cast<AudioFile*>(this->files[index]);

    if (file_as_audio != nullptr) {
        char input;
        std::cout << "Do you want visualizations [y/n] ?";
        std::cin >> input;

        if (input == 'y') {
            std::cout << "There you go!\n";
        }
    }

    this->files[index]->play();
}

void Player::copy_from(const std::vector<MultimediaFile*> source) {
    for(const MultimediaFile* file: source) {
        this->files.push_back(file->clone());
    }
}
void Player::clear_files() {
    for(MultimediaFile* file: this->files) {
        delete file;
    }
    this->files.clear();
}