#include <cmath>
#include <iostream>

using namespace std;

int main () {
    long long n, max=0;
    std::cin >> n;
    int x[n], y[n];

    for (int &t : x) { cin >> t; }
    for (int &t : y) { cin >> t; }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int temp=0;
            int dx = pow(x[i] - x[j], 2);
            int dy = pow(y[i] - y[j], 2);
            temp = dx + dy;

            if (temp > max) {
                max = temp;
            }
        }
    }

    cout << max << '\n';
}
