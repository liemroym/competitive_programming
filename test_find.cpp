#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v, result;
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
        it = find(v.begin(), v.end(), val);
        if (it != v.end()) {
            result.push_back(it - v.begin() + 1);
        } else {
            it = lower_bound(v.begin(), v.end(), val);
            result.push_back(it - v.begin() + 1);
        }
//            cout << "Yes " << it - v.begin() + 1 << endl;
//        } else {
//            cout << "No " << it - v.begin() + 1 << endl;
//        }
    }

    cout << endl;
    for (int k = 0; k < q; k++) {
        cout << result[k] << endl;
    }

    return 0;
}
