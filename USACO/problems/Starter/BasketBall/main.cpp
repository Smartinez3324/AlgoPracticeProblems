#include <iostream>

int main (){
    std::string str;
    std::getline(std::cin, str);
    int i = 0, a = 0, b = 0;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'A') {
            a += std::atoi(&str[++i]);
        } else {
            b += std::atoi(&str[++i]);
        }
    }

    if (a > b) {
        std::cout << 'A' << '\n';
    } else  {
        std::cout << 'B' << '\n';
    }

}
