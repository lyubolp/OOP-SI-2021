//
// Created by lyubo on 3.06.21 г..
//

#ifndef CODE_VIDEOFILE_HPP
#define CODE_VIDEOFILE_HPP


#include "MultimediaFile.hpp"
#include "AudioFile.hpp"

#include <vector>

//inheritance - 5pts
//const, const& - 1pts
class VideoFile: public MultimediaFile{
public:
    VideoFile() = default;
    VideoFile(const std::string& name, const std::string& extension, const unsigned size, const std::string& subtitles, const std::vector<AudioFile>& tracks);

    std::string get_subtitles() const; //0.25
    std::vector<AudioFile> get_tracks() const; //0.25 if absent

    void set_subtitles(const std::string& subtitles); //0.25
    void set_tracks(const std::vector<AudioFile>& tracks); //0.25

    MultimediaFile* clone() const override;
    void play() const override; //reusing - 3pts
private:
    std::string subtitles;
    std::vector<AudioFile> tracks; //5pts
};


#endif //CODE_VIDEOFILE_HPP
