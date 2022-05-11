#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> digits;
    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i += 2) {
        digits.push_back(s[i] - '0');
    }
    
    sort(digits.begin(), digits.end());

    int j;
    for (j = 0; j < digits.size()-1; j++) {
        cout << digits[j] << '+';
    }

    cout << digits[j];

    return 0;
}