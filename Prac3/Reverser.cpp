#include <iostream>
#include <string>

class Reverser{
    public:
        int ReverseDigit(int n){
            if (n < 10){
                std::cout<< n;
            }
            std::cout << n % 10;
            return ReverseDigit(n/10);
        }

        std::string ReverseString(std::string str){
            if (str.length() == 1){
                return str;
            }
            char last = str[str.length()-1];
            str.erase(str.length()-1);
            return last + ReverseString(str);

        }
};


int main(){
    Reverser reverse;
    reverse.ReverseDigit(12345);
    std::cout<< "\n";
    std::cout << reverse.ReverseString("world") << std::endl;
}