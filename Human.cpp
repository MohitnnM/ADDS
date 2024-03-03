#include <iostream>
#include "Human.h"
using namespace std;


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