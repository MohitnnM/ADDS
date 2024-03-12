#include <iostream>
using namespace std;

int sumNum(int n){
    if(n==0){
        return 0;
    }else{
        return n + sumNum(n-1);
    }
};

int main(){
    cout << sumNum(10);
    return 0;
}
