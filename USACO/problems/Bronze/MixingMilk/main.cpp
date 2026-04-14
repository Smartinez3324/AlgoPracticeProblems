#include <iostream>
#include <fstream>

using namespace std;

int main (){
    
    ifstream fin("mixmilk.in");
    ofstream fout("mixmilk.out");
    
    int c[3] = {0};
    int m[3] = {0};

    for (int i = 0; i < 3; i++) { fin >> c[i] >> m[i]; }
        
    for (int i = 0; i < 100; i++) {
        int b1 = i % 3;
        int b2 = (i+1) % 3;

        int amt = min(m[b1], c[b2] - m[b2]);
        m[b1] -= amt;
        m[b2] += amt;
    }
    fout << m[0] << '\n' << m[1] << '\n' << m[2] << '\n';
}

