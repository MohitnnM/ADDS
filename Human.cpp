#include <iostream>
using namespace std;
#include "Human.h"

Human::Human(string playerName): name(playerName){}

char Human::makeMove(){
    char move;
    cout << "Enter Move: ";
    cin >> move;
    return move;
}

string Human::getName(){
    return name;
}