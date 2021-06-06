//
// Created by lyubo on 3.06.21 г..
//

#ifndef CODE_STREAM_HPP
#define CODE_STREAM_HPP

#include "MultimediaFile.hpp"

//inheritance - 5pts
//const, const& - 0.5pts
class Stream: public MultimediaFile{
public:
    Stream() = default;
    Stream(const std::string& source);

    std::string get_source() const; //0.5pts
    void set_source(const std::string& source); //0.5pts

    MultimediaFile* clone() const override;
    void play() const override; //correct logic 3pts
private:
    std::string source;
};


#endif //CODE_STREAM_HPP
