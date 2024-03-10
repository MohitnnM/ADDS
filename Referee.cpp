#include "Referee.h"
#include "Move.h"
#include <string>

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    auto move1 = player1->makeMove();
    auto move2 = player2->makeMove();

    if (move1 && move2) {
        std::string name1 = move1->getName();
        std::string name2 = move2->getName();

        if (name1 == name2) {
            return nullptr;
        }

        if (name1 == "Rock" && (name2 == "Scissors" || name2 == "Lizard")) {
            return player1;
        } else if (name1 == "Paper" && (name2 == "Rock" || name2 == "Spock")) {
            return player1;
        } else if (name1 == "Scissors" && (name2 == "Paper" || name2 == "Replicant")) {
            return player1;
        } else if (name1 == "Monkey" && (name2 == "Paper" || name2 == "Spock" || name2 == "Replicant")) {
            return player1;
        } else if (name1 == "Robot" && (name2 == "Rock" || name2 == "Scissors" || name2 == "Lizard")) {
            return player1;
        } else if (name1 == "Pirate" && (name2 == "Paper" || name2 == "Rock" || name2 == "Replicant")) {
            return player1;
        } else if (name1 == "Ninja" && (name2 == "Scissors" || name2 == "Paper" || name2 == "Lizard")) {
            return player1;
        } else if (name1 == "Zombie" && (name2 == "Rock" || name2 == "Paper" || name2 == "Spock")) {
            return player1;
        } else if (name2 == "Rock" && (name1 == "Scissors" || name1 == "Lizard")) {
            return player2;
        } else if (name2 == "Paper" && (name1 == "Rock" || name1 == "Spock")) {
            return player2;
        } else if (name2 == "Scissors" && (name1 == "Paper" || name1 == "Replicant")) {
            return player2;
        } else if (name2 == "Monkey" && (name1 == "Paper" || name1 == "Spock" || name1 == "Replicant")) {
            return player2;
        } else if (name2 == "Robot" && (name1 == "Rock" || name1 == "Scissors" || name1 == "Lizard")) {
            return player2;
        } else if (name2 == "Pirate" && (name1 == "Paper" || name1 == "Rock" || name1 == "Replicant")) {
            return player2;
        } else if (name2 == "Ninja" && (name1 == "Scissors" || name1 == "Paper" || name1 == "Lizard")) {
            return player2;
        } else if (name2 == "Zombie" && (name1 == "Rock" || name1 == "Paper" || name1 == "Spock")) {
            return player2;
        }
    }

    return nullptr;
}