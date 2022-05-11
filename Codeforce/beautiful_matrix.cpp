#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 0, x, y;
    int n;
    
    while (i < 5) {
        int j = 0;
        while (j < 5) {
            cin >> n;
            if (n == 1) {
                x = i; y = j;
            }
            j++;
        }
        i++;
    }

    cout << abs(x-2) + abs(y-2);
    return 0;
}
