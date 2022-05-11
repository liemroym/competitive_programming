#include <bits/stdc++.h>

using namespace std;

int main() {
    int x = 0, qs;
    cin >> qs;

    for (int i = 0; i < qs; i++) {
        string q;
        cin >> q;
        if (q[0] == '+' || q[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    cout << x;
    return 0;
}
