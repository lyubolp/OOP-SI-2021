//
// Created by lyubo on 3.06.21 г..
//

#ifndef CODE_MULTIMEDIAFILE_HPP
#define CODE_MULTIMEDIAFILE_HPP

#include <string>
#include <iostream>

//const, const&, unsigned, () with parameters - 4pts
class MultimediaFile { //20pts
public:
    MultimediaFile();
    MultimediaFile(const std::string& name, const std::string& extension, const unsigned size);

    std::string get_name() const; //1pts
    std::string get_extension() const; //1pts
    unsigned get_size() const; //1pts

    void set_name(const std::string& new_name); //1pts
    void set_extension(const std::string& new_extension); //1pts
    void set_size(const unsigned new_size); //1pts

    virtual MultimediaFile* clone() const = 0;
    virtual void play() const; //5pts
    virtual ~MultimediaFile() = default; //5pts
private:
    std::string name;
    std::string extension;
    unsigned size;
};


#endif //CODE_MULTIMEDIAFILE_HPP
