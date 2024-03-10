#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock : public Move {
public:
    string getName() override;
    bool beats(Move* otherMove) override;
};

#endif