#include <iostream>
#include <string>

int main (int argc, char* argv[]) {
    std::string line {};
    int total {};
    int cnt {};
    int current {};

    std::cin >> cnt;

    while(current <= cnt) {
        int x {};
        int a {};
        int answers {};

        while (x < 3) {
            std::cin >> a;
            answers += a;
            x++;
        }

        if (answers >= 2) {
            total++;
        }

        current++;
    }
    std::cout << total << std::endl;
}
