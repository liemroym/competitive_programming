#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    vector<int>::iterator it;
    int n, q, temp, val;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    cin >> q;

    for (int j = 0; j < q; j++) {
        cin >> val;
        it = lower_bound(v.begin(), v.end(), val);
        if (v[it - v.begin()] == val) {
            cout << "Yes " << (it - v.begin() + 1) << endl;
        } else {
            cout << "No " << (it - v.begin() + 1) << endl;
        }
    }
    return 0;
}
