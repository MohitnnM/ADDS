#include <iostream>
using namespace std;
#include <string>


int recursive(int x, int n){
    if (n==0){
        return 1;
    } else{
        return x * recursive(x,n-1);
    }
}

int GCD(int a, int b){
    if(b==a){
        return a;
    }else{
        return GCD(b,a%b);
    }
}
int sumIntegerDigit(int n){
    if(n < 10){
        return n;
    }
    unsigned int digit = n%10;
    return digit + sumIntegerDigit(n/10);
}

#include <iostream>
#include <string>

string reverseString(string &str, int start, int end) {
    if (start >= end) {
        return str; // Base case: when start crosses end or equal to end
    }

    // Swap characters at start and end indices
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

    // Recursive call to reverse the substring
        return reverseString(str, start + 1, end - 1);

}


int main(){
    cout<< recursive(6,2)<< endl;
    cout<< GCD(2,2) << endl;
    cout<< sumIntegerDigit(100) << endl;
    string str = "Hello world";
    cout << reverseString(str, 0, str.length()-1) << endl;
}