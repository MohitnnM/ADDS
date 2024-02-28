#include "iostream"
#include "Referee.h"


Referee::Referee(){}

Player * Referee::refGame(Player * player1, Player * player2){
    char move1 = player1->makeMove();
    char move2 = player2->makeMove();

    
}