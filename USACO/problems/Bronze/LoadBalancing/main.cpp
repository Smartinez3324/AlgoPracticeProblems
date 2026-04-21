#include <algorithm>
#include <vector>
#include <iostream>
#include <fstream>
#include <set>

using namespace std;

int main() {
    
    ifstream fin("balancing.in");
    ofstream fout("balancing.out");

    int n, b;

    fin >> n >> b;

    pair<int, int> pairs[n];
    int allx[n];
    int ally[n];

    if (n == 1) { fout << 1; return 0;}
    
    for (int i = 0; i < n; i++) {
        int x, y;
        fin >> x >> y;
    }
    
    for (int i = 0; i < n; i++) {
        int q1=0,q2=0,q3=0,q4=0;

    
         
        for (pair<int, int> cord : pairs) {
            if (cord.first > midx) { 
                if(cord.second > midy) { q2++; }
                else { q4++; }
            } else {
                if(cord.second > midy) { q1++; }
                else { q3++; }
            }
        }
    }
    
    fout << max(max(q1, q2), max(q3, q4));
}

