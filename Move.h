#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Move {
public:
    virtual ~Move() {}
    virtual string getName() const = 0;
    virtual vector<string> getAttacks() const = 0;
};

#endif
