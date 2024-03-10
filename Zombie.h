#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"
#include <iostream>
#include <string>

class Zombie : public Move {
    public:
        Zombie();
        string getName();
};

#endif 