#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <iostream>
using namespace std;

class Move{
    public:
        virtual ~Move()=default;
        virtual string getName() const = 0;
};



#endif