#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> input;
    bool check = true;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        input.push_back(line);
    }

    char xChar = input[n/2][n/2];
    char oChar = input[0][1];
    
    int j = 0;
    
    while (j < n && check) {
        int k = 0;
        while (k < n && check) {
            if (k == j || k == n-1-j) {
                if (input[j][k] != xChar) {
                    check = false;
                    break;
                }
            } else {
                if (input[j][k] == xChar || input[j][k] != oChar) {
                    check = false;
                    break;
                }
            }
            k++;
        }
        j++;
    }
    
    cout << (check ? "YES" : "NO");

    return 0;
}