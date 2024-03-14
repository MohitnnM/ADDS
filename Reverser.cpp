#include <iostream>
#include "Reverser.h"
using namespace std;


int Reverser::reverseDigit(int value){
    if(value < 0){
        return -1;
    }else if(value < 10){
        return value;
    }else{ 
        cout<<value%10;
        reverseDigit(value/10);
    }
    
}

string Reverser::reverseString(string str){
    if (str.length() == 1) {
        return str;
    }else{
        return reverseString(str.substr(1,str.length())) + str.at(0);
    }
}

