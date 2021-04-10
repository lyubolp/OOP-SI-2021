//
// Created by lyubo on 8.04.21 г..
//

#ifndef WEEK07_LOGGER_HPP
#define WEEK07_LOGGER_HPP

#include <fstream>
#include <string>

template <class T>
class Logger {
public:
    Logger(const std::string& path = Logger<T>::DEFAULT_PATH);

    void write(const char* to_write) const;
    void write(const T* to_write) const ;
    void writeLine(const char* to_write) const;
    void writeLine(const T* to_write) const;

private:
    void write(const T* to_write, const bool is_with_new_line) const;
    static const std::string DEFAULT_PATH;
    std::string file_path;
};


#endif //WEEK07_LOGGER_HPP
