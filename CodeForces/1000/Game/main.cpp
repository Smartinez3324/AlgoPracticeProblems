#include <iostream>

int main (){
    int cnt;

    std::cin >> cnt;
    
    while(cnt > 0) {
        int k;
        std::cin >> k;

        int a1, b1, a2, b2;
        std::cin >> a1 >> b1 >> a2 >> b2;

        int atotal = a1+a2;
        int btotal = b1+b2+k;

        if (atotal < btotal) {
            std::cout << "YES" << "\n";
        } else if (atotal == btotal){
            if ((a1<b1) || (a2<b2)) {
                std::cout << "YES" << "\n";
            } else {
                std::cout << "NO" << "\n";
            }
        } else {
            std::cout << "NO" << "\n";
        }
        cnt--;
    }
}
