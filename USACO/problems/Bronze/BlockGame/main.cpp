#include <cstdio>
#include <fstream>
#include <iostream>
#include <map>

using namespace std;

int main (){
    ifstream fin("blocks.in");
    ofstream fout("blocks.out");

    int n;
    int tl[26];
    for (int &i : tl) { i = 0; }
    fin >> n;

    for (int i = 0; i < n; i++) {
        map<int, int> am;
        map<int, int> bm;
        string a, b;
        fin >> a >> b;
        for (char c : a){ am[c-'a'] += 1; }
        for (char c : b) { bm[c-'a'] += 1; }
        map<int, int> sm = am.size() <= bm.size() ? am : bm;
        map<int, int> lm = am.size() > bm.size() ? am : bm;

        for (auto v : sm) {
            if (lm[v.first] != 0) {
                lm[v.first] = max(lm[v.first], sm[v.first]);
            } else {
                lm[v.first] += sm[v.first];
            }
        }
        
        for (auto v : lm) { 
            tl[v.first] += v.second;
        }
    }
    
    for (int i : tl) {
        fout << i << '\n';
    }
}

