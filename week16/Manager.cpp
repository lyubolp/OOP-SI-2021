//
// Created by lyubo on 9.06.21 г..
//

#include "Manager.hpp"

std::vector<Worker> Manager::get_workers() const {
    return this->workers;
}
void Manager::add_worker(const Worker& worker) {
    this->workers.push_back(worker);
}

Person* Manager::clone() const {
    return new Manager(*this);
}