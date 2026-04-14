#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    ifstream fin("teleport.in");
    ofstream fout("teleport.out");

    int a, b, x, y;

    fin >> a >> b >> x >> y;
    
    int t = (abs(min(a, b) - min(x,y)) + abs(max(a, b) - max(x, y)));   
    int w = abs(a - b);

    int ans = t > w ? w : t;
    fout << ans;
}
