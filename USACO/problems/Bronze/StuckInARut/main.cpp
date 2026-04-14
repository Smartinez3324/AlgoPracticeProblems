#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Cow { 
    int x, y;
    // 1 = N 0 = E
    int dir;
};

int main() {
    int n;
    cin >> n;
    vector<Cow> ncow;
    vector<Cow> ecow;

    for (int i = 0; i < n; i++) {
        Cow cow;
        char dir;
        cin >> dir;
        cin >> cow.x >> cow.y;
        if (cow.dir == 'N') { cow.dir = 1; ncow.push_back(cow); }
        if (cow.dir == 'E') { cow.dir = 0; ecow.push_back(cow); }
    }

    sort(ncow.begin(), ncow.end(), [](const Cow &cowa, const Cow &cowb) { return cowa.x < cowb.x; } );
    sort(ecow.begin(), ecow.end(), [](const Cow &cowa, const Cow &cowb) { return cowa.y < cowb.y; } );

    for (Cow &c : ncow) {
    }
    
    palandrom(word) -> true or False
        for half of the total length 
            if char at index != char at wordLength-index
                then return false
        return true;
}

