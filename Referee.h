#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
using namespace std;
#include "Player.h"

class Referee{
    public:
        Referee::Referee(){}
        Player * refGame(Player * player1, Player * player2);
};




#endif