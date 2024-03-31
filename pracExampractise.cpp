#include <iostream>
#include <string>

int fib(int n, int acc){
    if (n==0||n==1){
        return acc;
    }
    return fib(n-1, n * acc);
    
}

int factorial(int n, int acc){
    if(n < 2){
        return acc;
    } else{
    return factorial(n-1,n*acc);
    }
}

int sum(int n, int acc=0){
    if (n == 0){
        return acc;
    }else{
        return sum(n-1, n + acc);
    }
}
int pow2(int x, int n, int acc = 1){
    if (n==0){
        return acc;
    }
    return pow2(x, n-1, x*acc);
}
int gcd(int a, int b){
    if (b ==0){
        return a;
    }
    return gcd(b,a%b);
}

int sumDigits(int n, int acc = 0){
    if (n==0){
        return acc;
    }
    return sumDigits(n/10, acc + n%10);
}

std::string reverse(std::string str, std::string acc=""){
    if (str.empty()){
        return acc;
    }
    return reverse(str.substr(1), str[0] + acc);

}

int main(){
    int n;
    std::cin >> n;
    std::string result = reverse("hello");
    std::cout<<result<<std::endl;     
}