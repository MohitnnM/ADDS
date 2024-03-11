#include "Human.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
#include <iostream>
using namespace std;

Human::Human(const string& playerName) : name(playerName) {}

Move* Human::makeMove() const {
    string move;
    cout << "Enter move: ";
    cin >> move;
    if (move == "Rock") {
        return new Rock();
    } else if (move == "Paper") {
        return new Paper();
    } else if (move == "Scissors") {
        return new Scissors();
    } else if (move == "Monkey") {
        return new Monkey();
    } else if (move == "Robot") {
        return new Robot();
    } else if (move == "Pirate") {
        return new Pirate();
    } else if (move == "Ninja") {
        return new Ninja();
    } else if (move == "Zombie") {
        return new Zombie();
    }else{
        return nullptr;
    }
}

string Human::getName() const{
    return name;
}