//
// Created by lyubo on 3.06.21 г..
//

#ifndef CODE_AUDIOFILE_HPP
#define CODE_AUDIOFILE_HPP

#include "MultimediaFile.hpp"

//inheritance - 5pts
//const, const&, unsigned - 1.5pts
class AudioFile: public MultimediaFile {
public:
    AudioFile();
    AudioFile(const std::string& name, const std::string& extension, const unsigned size, const unsigned length, const std::string& artist);

    unsigned get_length() const; //0.25pts
    std::string get_artist() const; //0.25pts

    void set_length(const unsigned length); //0.25pts
    void set_artist(const std::string& artist); //0.25pts

    MultimediaFile* clone() const override;
    void play() const override; //reusing code - 2.5pts
private:
    unsigned length;
    std::string artist;
};


#endif //CODE_AUDIOFILE_HPP
