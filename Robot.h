#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot : public Move {
public:
    string getName() override;
    bool beats(Move* otherMove) override;
};

#endif