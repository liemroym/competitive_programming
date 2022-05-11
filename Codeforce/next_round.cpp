#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a;
    int n, k, count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    for (int j = 0; j < n; j++) {
        if (a[j] > 0 && a[j] >= a[k-1]) count++;
    }
    cout << count;
    return 0;
}