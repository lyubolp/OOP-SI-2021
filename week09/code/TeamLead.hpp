//
// Created by lyubo on 23.04.21 г..
//

#ifndef CODE_TEAMLEAD_HPP
#define CODE_TEAMLEAD_HPP


#include "Manager.hpp"
#include "Worker.hpp"

class TeamLead: public Worker, public Manager {
public:
    TeamLead() = default;
    TeamLead(const Employee& employee, const std::string& machine, const std::string& manages);
};


#endif //CODE_TEAMLEAD_HPP
