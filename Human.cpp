#include <iostream>
#include "Human.h"
using namespace std;


Human::Human(string playerName) : name(playerName) {}

Move* Human::makeMove(){
    char move;
    cout << "Enter Move: ";
    cin >> move;
    return nullptr;
}

string Human::getName(){
    return name;
}