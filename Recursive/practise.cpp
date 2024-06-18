#include <iostream>
#include <math.h>
#include <string>

int sum(int n){
    if (n <=1){
        return 1;
    }
    return n + sum(n-1);
}

int tail_sum(int n, int acc){
    if (n<=1){
        return acc;
    }
    return tail_sum(n-1, n + acc);
    
}

int Fib(int n){
    if (n == 0 || n == 1){
        return n;
    }
    return Fib(n-1) + Fib(n-2);
}


int tail_Fib(int n, int a = 0, int b = 1) {
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return tail_Fib(n - 1, b, a + b);
}

int power(int n, int x){
    if (n==0){
        return 1;
    }
    return x * power(n-1, x);
    
}
int rec_power(int n, int x, int acc){
    if (n==0){
        return acc;
    }
    return rec_power(n-1, x, x * acc);
    
}

int Euclid(int a, int b){
    if(b==0){
        return a;
    } else{
        return Euclid(b,a%b);
    }
}

int tail_Euclid(int a, int b, int acc = 0){
 
    if(b==0){
        return acc;
    } else{
        return tail_Euclid(b,a%b, acc = b);
    }
}

int sum_int(int n){
    if(n == 0){
        return 0;
    } else if (n < 10){
        return n;
    }

    return (n%10) + sum_int(n/10);

}
int tail_sumInt(int n, int acc){
    if(n == 0){
        return acc;
    }

    return tail_sumInt(n/10,acc+(n%10));

}

std::string revString(std::string str){
    if(str.length() == 1){
        return str;
    }
    char last = str[str.length()-1];
    str.erase(str.length()-1);
    return last + revString(str);
}

std::string tail_revString(std::string str, std::string acc){
    if(str.length() == 0){
        return acc;
    }
    char last = str[str.length()-1];
    str.erase(str.length()-1);
    return tail_revString(str, acc + last);
}

bool stringPalindrome(std::string str){
    if (str.length() <= 1){
        return true;
    }

    if (str.front() != str.back()){
        return false;
    }

    return stringPalindrome(str.substr(1,str.length()-2));
}


int intPalindrome(int n){
    if (n == 2){
        return 2;
    }
    return (n * (n-1) + intPalindrome(n-1));
}


int main(){
    int result = sum(5);
    std::cout << result<<std::endl;
    int result2 = tail_sum(5,1);
    std::cout << result2<<std::endl;
    int result3 = power(3,2);
    std::cout << result3<<std::endl;
    int result4 = rec_power(3,2,1);
    std::cout << result4<<std::endl;
    int result5 = Euclid(3,5);
    std::cout << result5<<std::endl;
    int result6 = tail_Euclid(120,60);
    std::cout << result6<<std::endl;
    int result7 = sum_int(56);
    std::cout << result7<<std::endl;
    int result8 = tail_sumInt(56,0);
    std::cout << result8<<std::endl;
    std::string result9 = revString("world");
    std::cout << result9<<std::endl;
    std::string result10 = tail_revString("world","");
    std::cout << result10<<std::endl;
    bool result11 = stringPalindrome("racecar");
    std::cout << result11<<std::endl;
    bool result12 = intPalindrome(1221);
    std::cout << result12<<std::endl;
    int result13 = Fib(5);
    std::cout << result13<<std::endl;
    int result14 = tail_Fib(5);
    std::cout << result14<<std::endl;

}