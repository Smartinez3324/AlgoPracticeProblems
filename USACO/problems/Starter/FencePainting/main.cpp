#include <iostream>
#include <fstream>
#include <vector>

int main (){

    std::vector<bool> fence(100);

    std::ifstream fin ("paint.in");
    std::ofstream fout ("paint.out");
    
    int a, b, c, d;

    fin >> a >> b >> c >> d;

    for (int i = a; i < b; i++) fence[i] = true;
    for (int i = c; i < d; i++) fence[i] = true;
    
    int ans = 0;
    
    for (int i = 0; i < 100; i++) ans += fence[i];
    fout << ans;
}
