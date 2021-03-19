//
// Created by lyubo on 18.03.21 г..
//

#include "cpu.hpp"

cpu::cpu(): clock_rate(0.0), core_count(0), cache_size(0) {}
cpu::cpu(const double& clock_rate, const int core_count, const int cache_size)
    : clock_rate(clock_rate), core_count(core_count), cache_size(cache_size) {}

double cpu::get_clock_rate() const {
    return this->clock_rate;
}
int cpu::get_core_count() const {
    return this->core_count;
}
int cpu::get_cache_size() const {
    return this->cache_size;
}