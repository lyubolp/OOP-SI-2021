//
// Created by lyubo on 18.03.21 г..
//

#ifndef CODE_CPU_HPP
#define CODE_CPU_HPP

/*
 *  тактова честота,
 *  брой ядра и размер на КЕШ паметта
 */
class cpu {
public:
    cpu();
    cpu(const double& clock_rate, const int core_count, const int cache_size);

    double get_clock_rate() const;
    int get_core_count() const;
    int get_cache_size() const;
private:
    double clock_rate;
    int core_count;
    int cache_size;
};


#endif //CODE_CPU_HPP
