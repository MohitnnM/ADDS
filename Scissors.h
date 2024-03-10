#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"
#include <iostream>
#include <string>

class Scissors: public Move {
    public:
        Scissors();
        string getName() const override;
};

#endif