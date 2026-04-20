#include <iostream>
#include <fstream>
#include <set>

using namespace std;

int main() {

    ifstream fin("cownomics.in");
    ofstream fout("cownomics.out");

    int n, m; 
    fin >> n >> m;

    int potential {};

    set<char> spotty[m];
    set<char> plain[m];

    for (int i = 0; i < n; i++){
        string line {};
        fin >> line;
        for (int j = 0; j < m; j++) { spotty[j].insert(line[j]); }
    }

    for (int i = 0; i < n; i++){
        string line {};
        fin >> line;
        for (int j = 0; j < m; j++) { plain[j].insert(line[j]); }
    }
    
    for (int i = 0; i < m; i++) {
        bool isPotential = true;
        for (char ch : plain[i]) {
            if (spotty[i].find(ch) != spotty[i].end()) {
                isPotential = false;
                break;
            }
        }
        if (isPotential) { potential++; }
    }

    fout << potential;
}
