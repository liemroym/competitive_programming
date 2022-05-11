#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a;
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        a.push_back(0);
    }

    for (int j = 0; j < q; j++) {
        int x, l, r;
        cin >> x >> l >> r;
        l--; r--;
        switch (x) {
            case 1:
            {
                int temp = 0;
                int idx = 0;
                for (int i = l; i <= (r+l)/2; i++) {
                    temp += (r-idx)-i+ 1;
                    a[i] += temp;
                    idx++;
                }
                if ((r+l) % 2 == 0) {
                    idx--;
                    temp--;
                }
                for (int j = i; j <= r; j++) {
                    a[j] += temp;
                    temp -= j - (l+idx-1) + 1;
                    idx--;
                }
                break;
            }

            case 2:
            {
                long int sum = 0;
                for (int i = l; i <= r; i++) {
                    sum += a[i];
                }
                cout << sum % 1000000007 << endl;
                break;
            }
        }
    }
    
    return 0;  
}
