#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Move.h"

class Player {
public:
    virtual ~Player() {}
    virtual Move* makeMove() const = 0;
    virtual std::string getName() const = 0;
};

#endif
