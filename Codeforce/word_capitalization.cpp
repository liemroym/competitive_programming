#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    if (s[0] - '0' > 42) {
        s[0] = (s[0] - '0' - 32) + '0';
    }

    cout << s;

    return 0;
}