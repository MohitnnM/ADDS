#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"
#include <iostream>
using namespace std;


class Zombie : public Move {
    public:
        string getName() const override;
        vector<string> getAttacks() const override;
};

#endif