#include <iostream>
#include <math.h>

int powSum(int n){
    if (n == 0){
        return 0;
    }
    return pow(n,n) + powSum(n-1);

}


int rec_powSum(int n, int acc){
    if (n < 1){
        return acc;
    }
    return rec_powSum(n-1, acc + pow(n,n));
}

int main(){
    int result = powSum(3);
    std::cout << result << std::endl;
    int tail = rec_powSum(3,0);
    std::cout << tail << std::endl;
}