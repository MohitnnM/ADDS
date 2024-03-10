#ifndef NINJA_H
#define NINJA_H

#include "Move.h"
#include <string>
#include <iostream>

class Ninja : public Move {
    public:
        Ninja();
        string getName();
};

#endif