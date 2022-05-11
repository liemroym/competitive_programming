#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a;
    int n, b;
    cin >> n >> b;

    float av;
    float diff = (float)b / n;
    int min = 100;
    int max = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp < min) min = temp;
        if (temp > max) max = temp;
        av += temp;
        a.push_back(temp);
    }

    av /= n;

    if (min + av < max) {
        cout << -1;
    } else {
        for (int j = 0; j < n; j++) {
            float res = float(diff + (av-a[j]));
            cout << setprecision(6) << fixed << res << endl;
        }
    }

    return 0;
}