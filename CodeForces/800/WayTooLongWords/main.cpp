#include <iostream>
#include <string>

using namespace std;

string abbriviate(string* line) {
    char last = line->back();
    char first = line->front();
    int len = line->length() - 2;
    string strLen = to_string(len);
    return first + strLen + last;
}

int main(int args, char* argv[]) {
    string line {};
    int cnt, current {};
    cin >> cnt;
    cin >> line;
    while (current < cnt) {
        if (line.length() <= 10) {
            cout << line << endl; 
        } else {
            cout << abbriviate(&line) << endl;
        }
        cin >> line;
        current ++;
    }
}
