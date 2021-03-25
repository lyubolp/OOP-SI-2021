//
// Created by lyubo on 25.03.21 г..
//

#ifndef WEEK05_SAFE_HPP
#define WEEK05_SAFE_HPP


class Safe {
public:
    Safe(const int secret_num);

    friend int hacker(const Safe& instance);
private:
    int secret_num;
};


#endif //WEEK05_SAFE_HPP
