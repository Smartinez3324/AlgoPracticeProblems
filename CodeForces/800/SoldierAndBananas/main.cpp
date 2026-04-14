#include <iostream>

using namespace std;

int main () {
    long long int k, n, w, total = 0;

    cin >> k >> n >> w;

    for (int i = 1; i < w + 1; i++) {
        total += k * i;
    }
    
    cout << (total-n > 0 ? total-n : 0);
}
