#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot : public Move {
    public:
        string getName() const override;
        vector<string> getAttacks() const override;
};

#endif
