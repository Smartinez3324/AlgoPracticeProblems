#include <iostream>
#include <sstream>

using namespace std;

int main (){
    string line;
    getline(cin, line);

    while (true) {
        stringstream ss(line);
        int n;
        ss >> n;

        if (n == 0) { break; }
        int perm[n];
        
        for (int i = 0; i < n; i++) { ss >> perm[i]; }
        getline(cin, line);

        if (line.size() % n != 0) { line.append(n-line.size()%n, ' '); }

        string newline;
        for (int i = 0; i < line.size(); i += n) {
            for (int j = 0; j < n; j++) {
                newline += line[perm[j]+i-1];
            }
        }
        cout << '\'' << newline << '\'' << '\n';

        getline(cin, line);
    }
}
