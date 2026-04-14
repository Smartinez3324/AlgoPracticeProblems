#include <iostream>
#include <fstream>

using namespace std;

int main (){

    ifstream fin("cowsignal.in");
    ofstream fout("cowsignal.out");

    int x, y, mult; 
    string line;
    fin >> x >> y >> mult;
    getline(fin, line);

    for (int i = 0; i < x*mult; i++) {
        if (i%mult == 0){ getline(fin, line); }
        for (int j = 0; j < y*mult; j++) {
            fout << line[j/mult];
        }
        fout << '\n';
    }
}

