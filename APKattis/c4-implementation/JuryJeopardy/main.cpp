#include <iostream>
#include <set>


#define Direction
using namespace std;


void changeDirection(char newdir, pair<int, int>* curr) {
    if (newdir == 'B') {
        if(curr->first == 0){ curr->second = curr->second*-1;}
        else if(curr->second == 0){ curr->first = curr->first *-1;}

    } else if (newdir == 'R') {
        if (curr->first == 0) {
            int temp = curr->first;
            curr->first = curr->second;
            curr->second = temp; 
        } else {
            int temp = curr->first;
            curr->first = curr->second*-1;
            curr->second = temp*-1; 
        }

    } else if (newdir == 'L') {
        if (curr->first == 0) {
            int temp = curr->first;
            curr->first = curr->second*-1;
            curr->second = temp*-1; 
        } else {
            int temp = curr->first;
            curr->first = curr->second;
            curr->second = temp; 
        }
    }
}


int main (){
    int n;
    cin >> n;
    cout << n << '\n';
    for (int i = 0; i < n; i++) {
        string inst; 
        cin >> inst;
        int x=0, y=0, xmax=0, ymax=0, xmin=0, ymin=0;
        pair<int, int> fd = {1,0};
        set<pair<int,int>> dots;
        dots.insert({x,y});

        for (char mv : inst) { 
            changeDirection(mv , &fd);
            x += fd.first;
            y += fd.second;
            dots.insert({x,y});
            xmax = max(x, xmax);
            ymax = max(y, ymax);
            ymin = min(y, ymin);
        }

        cout << ymax+abs(ymin)+3 << ' ' << xmax+2 << '\n';
        for (int row = ymax + 1; row >= ymin - 1; row--) {
            for (int col = xmin; col <= xmax + 1; col++) {
                if(dots.find({col,row}) != dots.end()) {
                    cout << '.';
                } else { cout << '#'; }
            }
            cout << '\n';
        }
    }
}

