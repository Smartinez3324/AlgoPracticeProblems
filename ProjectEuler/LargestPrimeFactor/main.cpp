#include <iostream>

int main (){
    
    long long num = 600851475143;
    long long i = 2;

    while (i != num) {
        if (num % i == 0) {
            num = num / i; 
        } else { i++; }
    }

    std::cout << std::max(i, num);

}

