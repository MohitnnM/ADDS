#include <iostream>
#include "Refree.h"


Refree::Refree(){}

Player* Refree::refGame(Player* player1, Player* player2){
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove(); 

    if (move1->getName()==move2->getName()){
        return nullptr;
    } 


    for (const std::string str : move1->getAttack()) {
        if (str == move2->getName()) {
            return player1;
        }
    }

    for (const std::string str : move2->getAttack()) {
        if (str == move1->getName()) {
            return player2;
        }
    }
    return nullptr;
}

