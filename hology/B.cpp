#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<float>> a;
    int max = 0;
    for (int i = 0; i < 8; i++) {
        float x, y, z;
        cin >> x >> y >> z;
        vector<float> temp = {x, y, z};
        a.push_back(temp);
    }

    for (int j = 0; j < 8; j++) {
        for (int k = j; k < 8; k++) {
            if (floor(sqrt(pow(a[j][0] - a[k][0], 2) + pow(a[j][1] - a[k][1], 2) + pow(a[j][2] - a[k][2], 2))) > max) {
                max = floor(sqrt(pow(a[j][0] - a[k][0], 2) + pow(a[j][1] - a[k][1], 2) + pow(a[j][2] - a[k][2], 2)));
            }
        }
    }
    cout << max;    
    return 0;  
}
/*
2 2 2
4 2 2
2 2 4
4 2 4
2 4 2
4 4 2
2 4 4
4 4 4
*/