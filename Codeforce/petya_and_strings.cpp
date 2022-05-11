#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    int count = 0, i = 0;
    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    
    while (i < s1.length()) {
        if (s1[i] < s2[i]) {
            count--;
            break;
        } else if (s1[i] > s2[i]) {
            count++;
            break;
        }
        i++;
    }

    cout << count;
    return 0;
}
