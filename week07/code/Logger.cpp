//
// Created by lyubo on 8.04.21 г..
//

#include "Logger.hpp"

template <typename T>
const std::string Logger<T>::DEFAULT_PATH = "lab.log";

template <typename T>
Logger<T>::Logger(const std::string& path) {
    this->file_path = path;
    std::ofstream file_creator(path, std::ios::app);
    file_creator.close();
}

template <typename T>
void Logger<T>::write(const char* to_write) const {
    this->write(to_write, false);
}

template <typename T>
void Logger<T>::write(const T* to_write) const {
    this->write(to_write, false);
}

template <typename T>
void Logger<T>::writeLine(const char* to_write) const {
    this->write(to_write, true);
}

template <typename T>
void Logger<T>::writeLine(const T* to_write) const {
    this->write(to_write, true);
}

template <typename T>
void Logger<T>::write(const T* to_write, const bool is_with_new_line) const {
    std::ofstream file_handle(this->file_path, std::ios::app);

    if(file_handle.is_open()) {
        file_handle << to_write;

        if(is_with_new_line) {
            file_handle << std::endl;
        }
    }
    file_handle.close();
}