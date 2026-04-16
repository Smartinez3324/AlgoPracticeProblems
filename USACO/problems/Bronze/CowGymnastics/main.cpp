#include <iostream>
#include <fstream>
#include <set>

using namespace std;

int main() {
    ifstream fin("gymnastics.in");
    ofstream fout("gymnastics.out");

    int k, n;
    fin >> k >> n;

    int score[k][n];
    set<pair<int, int>> pairs; 
    
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) { 
            fin >> score[i][j];
        }
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            pairs.insert({score[0][i], score[0][j]});
        }
    }

    for (int x = 1; x < k; x++) {
        for (int i = n-1; i >=0; i--) {
            for (int j = i-1; j >= 0; j--) {
                pairs.erase({score[x][i], score[x][j]});
            }
        }
    }

    fout << pairs.size();
}
