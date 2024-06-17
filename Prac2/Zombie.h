#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h";

class Zombie: public Move{
    public:
        std::string getName() const override;
        std::vector<std::string> getAttack() const override;
};

#endif