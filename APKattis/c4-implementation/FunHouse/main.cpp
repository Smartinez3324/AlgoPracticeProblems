#include <iostream>

using namespace std;

void chooseDirection(char m, pair<int, int> &dir) {
    int dx = dir.first;
    int dy = dir.second;
    if (m == '/'){
        dir = {dy, dx};
    } else if (m == '\\') {
        dir = {-dy,-dx};
    }
}

int main (){
    
    int num = 0;

    while(true) {
        int xmax, ymax;
        cin >> xmax >> ymax;
        if (xmax == 0 && ymax == 0) { break; }

        num++;
        cout << "HOUSE " << num << '\n';

        char map[ymax][xmax];
        string line;

        pair<int, int> pos;
        pair<int, int> dir;

        for (int row = ymax-1; row >= 0; row--) {
            cin >> line;
            for (int col = 0; col < xmax; col++) {
                map[row][col] = line[col];
                if (line[col] == '*') { pos = {col, row}; }
            }
        }

        if(pos.first == xmax-1) { dir = {-1, 0}; }
        else if(pos.first == 0) { dir = {1, 0}; }
        else if(pos.second == ymax-1) { dir = {0, -1}; }
        else if(pos.second == 0) { dir = {0, 1}; }

        while (map[pos.second][pos.first] != 'x'){
            pos = {pos.first+dir.first, pos.second+dir.second};
            char ch = map[pos.second][pos.first];
            if (ch != '.') { chooseDirection(ch, dir); }
        }

        map[pos.second][pos.first] = '&';

        for (int row = ymax-1; row >= 0; row--){
            for (int col = 0; col < xmax; col++) {
                cout << map[row][col];
            }
            cout << '\n';
        }
    }
}

