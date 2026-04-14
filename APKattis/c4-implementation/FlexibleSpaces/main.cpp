#include <iostream>
#include <set>

using namespace std;

int main (){
    int l, n; 
    cin >> l >> n;
    set<int> config;
    int arr[n+2];
    arr[0] = 0;
    for (int i = 1; i < n+1; i++) { cin >> arr[i]; }
    arr[n + 1] = l;

    for (int i = 0; i < n+2; i++) { 
        for (int j = i+1; j < n+2; j++) { 
            config.insert(arr[j] - arr[i]);
        }
    }
    for (auto v : config) {
        cout << v << ' ';
    }
}
