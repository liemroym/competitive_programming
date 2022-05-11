#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, s, n, pos = 0;
    cin >> k >> s >> n;
    if (floor(n/k) >= s) {
        n -= k*s;
        if (n < (k+2)*s) {
            pos = 1;
        } else {
            if (s == 1) {
                n -= (k+2);
                if (n % 2 == 0) pos = 1;
            } else if (n != (k+2)*s-1) {
                pos = 1;
            }
        }
    }
    cout << (pos ? "YES" : "NO");
    return 0;
}
