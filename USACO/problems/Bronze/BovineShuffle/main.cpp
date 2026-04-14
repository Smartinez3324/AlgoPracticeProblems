#include <iostream>
#include <fstream>

using namespace std;

int main (){
    
    ifstream fin("shuffle.in");
    ofstream fout("shuffle.out");

    int n;
    fin >> n;
    int pos[n];
    int cows[n];

    for(int &t: pos) { fin >> t; }
    for(int &t: cows) { fin >> t; }

    for(int i = 0; i < 3; i++) {
        int temp[n];
        for(int j = 0; j < n; j++) {
            temp[j] = cows[pos[j]-1];
        }
        for (int k = 0; k < n; k++) {
            cows[k] = temp[k];
        }
    }

    for(int &t : cows) { fout << t << '\n'; }
}
