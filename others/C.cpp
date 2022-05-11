#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        map<int, int> b;
        int n, k, max = 0;
        cin >> n >> k;
        for (int j = 0; j < n; j++) {
            int temp, calc;
            cin >> temp;
            if (temp % k != 0) {
                if (temp < k) {
                    calc = k-temp;
                } else {
                    calc = k*(temp/k + 1) - temp;
                }
                
                auto l = find(b.begin(), b.end(), calc);
                if (l != b.end()) {
                    (l->second)++;
                    calc += k*l->second;
                } 
                b.insert({calc, l->second});
                if (calc > max) max = calc; 
            }
        }
        cout << (max == 0 ? 0 : max+1) << endl;
    }

    return 0;
}

/*
5
4 3
1 2 1 3
10 6
8 7 1 8 3 7 5 10 8 9
5 10
20 100 50 20 100500
10 25
24 24 24 24 24 24 24 24 24 24
8 8
1 2 3 4 5 6 7 8
*/