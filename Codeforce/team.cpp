#include <bits/stdc++.h>
using namespace std;

int main() {
    int q, count = 0;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n = 0, in;
        for (int j = 0; j < 3; j++) {
            cin >> in;
            n += in;
        }
        count += (n >= 2 ? 1 : 0); 
    }
    cout << count;

    return 0;
}