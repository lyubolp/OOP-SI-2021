//
// Created by lyubo on 3.06.21 г..
//

#ifndef CODE_PLAYER_HPP
#define CODE_PLAYER_HPP

#include <vector>

#include "MultimediaFile.hpp"

#include "AudioFile.hpp"
#include "VideoFile.hpp"
#include "Stream.hpp"

//const, const&, iterator - 3pts
class Player {
public:
    Player() = default;

    Player(const Player& from);
    Player& operator=(const Player& from);

    ~Player(); //5pts

    //add - 1pts
    void add_audio_file(const AudioFile& file);
    void add_video_file(const VideoFile& file);
    void add_stream(const Stream& file);

    void remove(const int index); //1pts

    void play(const int index) const; //5pts
private:
    void copy_from(const std::vector<MultimediaFile*> source);
    void clear_files();
    std::vector<MultimediaFile*> files;
    //5pts - MultimediaFile*
    //5pts - clone
};


#endif //CODE_PLAYER_HPP
