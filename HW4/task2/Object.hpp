#pragma once
class Object{
public:
    Object(const std::string& name, const std::string& location, const std::string& extension);

    std::string get_name() const;
    std::string get_location() const;
    std::string get_extension() const;
    std::string get_fullpath() const;
};