//
// Created by lyubo on 3.06.21 г..
//

#include "VideoFile.hpp"

VideoFile::VideoFile(const std::string& name, const std::string& extension, const unsigned size, const std::string& subtitles, const std::vector<AudioFile>& tracks): MultimediaFile(name, extension, size), subtitles(subtitles), tracks(tracks) {}

std::string VideoFile::get_subtitles() const {
    return this->subtitles;
}
std::vector<AudioFile> VideoFile::get_tracks() const {
    return this->tracks;
}

void VideoFile::set_subtitles(const std::string& subtitles) {
    this->subtitles = subtitles;
}
void VideoFile::set_tracks(const std::vector<AudioFile>& tracks) {
    this->tracks = tracks;
}

MultimediaFile* VideoFile::clone() const {
    return new VideoFile(*this);
}
void VideoFile::play() const {
    this->MultimediaFile::play();
    std::cout << subtitles;

    for(const AudioFile& track: this->tracks) {
        track.play();
    }
}