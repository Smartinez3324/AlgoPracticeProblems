#include <iostream>
#include <fstream>

using namespace std;

int main (){
    
    ifstream fin("lostcow.in");
    ofstream fout("lostcow.out");

    int x, y, td=0, d=1;
    fin >> x >> y;

    while(true) {
        int rd = d+x;
        if (d > 0) {
            if (rd >= y && x < y) {
                td += abs(x-y);
                break;
            }
        } else {
            if (rd <= y && x > y) {
                td += abs(x-y);
                break;
            }
        }
        td += (abs(d)*2);
        d=d*-2;
    }
    fout << td;
    cout << td;
}

