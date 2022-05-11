#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    cout << n * (m / 2) + (m % 2 == 1 ? n/2 : 0);
    return 0;
}
