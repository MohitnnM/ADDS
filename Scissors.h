#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors: public Move {
public:
    string getName() override;
    bool beats(Move* otherMove) override;
};

#endif