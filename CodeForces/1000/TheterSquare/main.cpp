#include <cmath>
#include <iostream>

using namespace std;

int main () {
    double n, m, a;
    cin >> n;
    cin >> m;
    cin >> a;
    cout << (unsigned long long) ceil(n/a) * (unsigned long long) ceil(m/a) << endl;
}
