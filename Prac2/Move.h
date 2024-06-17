#ifndef MOVE_H
#define MOVE_H

#include <iostream>
#include <vector>

class Move{
    public:
        Move();
        virtual std::string getName() const = 0;
        virtual std::vector<std::string> getAttack() const = 0; 
};


#endif