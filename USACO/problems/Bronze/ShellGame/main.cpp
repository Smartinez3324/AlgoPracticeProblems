#include <iostream>
#include <fstream>
#include <utility>

using namespace std;

int main (){
    
    ifstream fin("shell.in");
    ofstream fout("shell.out");

    int n, a, b, g;
    int x[] = {1,2,3};
    int cnt[3] = {0};

    fin >> n;

    for(int i = 0; i < n; i++) { 
        fin >> a >> b >> g;
        swap(x[a-1], x[b-1]);
        ++cnt[x[g-1]-1];
    }

    fout << max(cnt[0], max(cnt[1], cnt[2]));
}

