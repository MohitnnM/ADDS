#ifndef ROCK_H
#define ROCK_H

#include "Move.h"
#include <iostream>
#include <string> 

class Rock : public Move {
    public:
        Rock();
        string getName() const override;
};

#endif