#include <iostream>
#include <fstream>

using namespace std;

int main (){
    
    ifstream fin("speeding.in");
    ofstream fout("speeding.out");

    int n, m, bs = 0, pos=0;
    int s[100];

    fin >> n >> m;

    for (int i = 0; i < n; i++) {
        int end, limit;
        fin >> end >> limit;
        for (int j = 0; j < end; j++) {
            s[pos++] = limit;
        }
    }
    
    pos = 0;

    for (int i = 0; i < m; i++) {
        int end, speed;
        fin >> end >> speed;
        for (int j = 0; j < end; j++) {
            if (s[pos] < speed) { bs = max(bs, speed - s[pos]); }
            pos++;
        }
    }
    fout<<bs;
}


