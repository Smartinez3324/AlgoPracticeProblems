#include <cstddef>
#include <iostream>
#include <set>

using namespace std;

void startDir(pair<int, int> ent, pair<int,int> &dir) {
    if (ent.first == 0){
        
    }
}

int main (){
    while(true) {
        int xmax, ymax;
        cin >> xmax >> ymax;
        if (xmax == 0 && ymax == 0) { break; }

        char map[ymax][xmax];
        string line;

        pair<int, int> ent;
        pair<int, int> dir;

        for (int row = ymax; row > 0; row--) {
            cin >> line;
            for (int col = 0; col < xmax; col++) {
                map[row][col] = line[col];
                if (line[col] == '*') { ent = {col, row}; }
            }
        }
        // cout << ent.first << " " << ent.second << '\n';

    
        for (int row = ymax; row > 0; row--){
            for (int col = 0; col < xmax; col++) {
                cout << map[row][col];
            }
            cout << '\n';
        }

    }
}

