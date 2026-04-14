#include <iostream>
#include <fstream>

int main (){
    std::ifstream fin("word.in");
    std::ofstream fout("word.out");

    std::string word;
    int curr = 0, n, k;

    fin >> n;
    fin >> k;

    while (fin >> word) {
        int size = word.size();
        if ((size + curr) <= k) {
            curr += size; 
            fout << word << ' ';
            
        } else {
            fout << '\n' << word << ' ';
            curr = size;
        }
    }
}
