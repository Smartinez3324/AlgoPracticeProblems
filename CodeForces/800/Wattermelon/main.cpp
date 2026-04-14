#include <cstdlib>
#include <iostream>
int main (int args, char* argv[]) {
    char w {};
    std::cin >> w;
    int weight = atoi(&w);
    
    if (weight  > 2) {
        if ((weight%2) == 0) {
            std::cout << "YES";
        }
        else {
            std::cout << "NO";
        }
    } else {
        std::cout << "NO";
    }
}
