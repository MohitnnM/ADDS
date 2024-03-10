
#include "iostream"
#include "Referee.h"


Referee::Referee(){}

Player * Referee::refGame(Player * player1, Player * player2){
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1->getName() == move2->getName()) {
        // Tie
        delete move1;
        delete move2;
        return nullptr;
    } else if ((move1->getName() == "Rock" && (move2->getName() == "Scissors" || move2->getName() == "Monkey")) ||
               (move1->getName() == "Paper" && (move2->getName() == "Rock" || move2->getName() == "Pirate")) ||
               (move1->getName() == "Scissors" && (move2->getName() == "Paper" || move2->getName() == "Robot")) ||
               (move1->getName() == "Monkey" && (move2->getName() == "Ninja" || move2->getName() == "Robot")) ||
               (move1->getName() == "Robot" && (move2->getName() == "Pirate" || move2->getName() == "Zombie")) ||
               (move1->getName() == "Pirate" && (move2->getName() == "Ninja" || move2->getName() == "Monkey")) ||
               (move1->getName() == "Ninja" && (move2->getName() == "Pirate" || move2->getName() == "Zombie")) ||
               (move1->getName() == "Zombie" && (move2->getName() == "Monkey" || move2->getName() == "Scissors"))) {
        // Player 1 wins
        return player1;
    } else {
        // Player 2 wins
        return player2;
    }
}