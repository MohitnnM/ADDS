#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock : public Move {
    public:
        Rock();
        string getName() override;
};

#endif