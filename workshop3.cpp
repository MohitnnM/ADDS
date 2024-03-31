#include <iostream>
#include <string>
using namespace std;


int returnFirstNum(std::string str){
    for(int i=0; i < str.length(); i++){
        if (isdigit(str[i])== true){
            int num = str[i];
            break;
        } else{

        }
        return 0;
    } 
    return 0;
}

int pattern(int n){
    return 0;
}

int main(){
    cout << returnFirstNum("Hello2you4") << endl;
    return 0;
}