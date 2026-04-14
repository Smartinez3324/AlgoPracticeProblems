#include <iostream>
#include <fstream>

using namespace std;

int main (){

    ifstream fin("pails.in");
    ofstream fout("pails.out");

    int x, y, m;
    int best = 0;

    fin >> x >> y >> m;
    
    for (int i = 0; i <= m/x ; i++) {
        int dx = m - x * i;
        int ym = dx / y;
        int ans = x*i + y*ym;
        best = max(ans, best);
    }

    fout << best << '\n';

    return 0;
}

