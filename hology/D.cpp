#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        vector<int> x;
        int n, a, b;
        cin >> n >> a >> b;
        for (int j = 0; j < n; j++) {
            int temp;
            cin >> temp;
            x.push_back(temp);
        }
        int temp;
        temp = n * (n % a);
        while (temp / (n % a) == 0) {
            temp /= (n % a);
        }
        b = b % temp; 
        if (a > n) {
            for (int k = 0; k < b; k++) {
                vector<int> res;
                for (int l = n - a; l < 2*n - a; l++) {
                    res.push_back(x[l%n]);
                }
                x = res;
            }
        }
        cout << x[0] << endl;
    }
    return 0;  
}
