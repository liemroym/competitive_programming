#include <bits/stdc++.h>
using namespace std;

unsigned long long int fibonacci(int n) {
    unsigned long long int arr[n+1];

    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }

    for (int j = 0; j <= n; j++) {
        cout << arr[j] << ' ';
    }
    
    cout << endl << endl;
    return arr[n];
}

int main() {
    int n;
    cin >> n;

    cout << fibonacci(n);
    return 0;
}