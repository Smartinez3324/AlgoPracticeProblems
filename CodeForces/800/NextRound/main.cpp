#include <iostream>

int main (){
    int n, k;
    int a = 0;
    std::cin >> n >> k;
    int arr[n];

    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    int ref = arr[k-1];

    for(int i = 0; i < n; i++) {
        if (arr[i]>=ref&&arr[i]) {
            a++;
        }
    }
    std::cout << a;

    return 0;
}

