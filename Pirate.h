#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"
#include <iostream>
#include <string>

class Pirate : public Move {
    public:
        Pirate();
        string getName() const override;
};

#endif