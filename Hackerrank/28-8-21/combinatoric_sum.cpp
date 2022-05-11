#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> allCombination(vector<int> arr) {
    vector<vector<int>> res;
    
    return res;
}

int main() {
    vector<int> arr = {3};
    vector<vector<int>> result = allCombination(arr);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << ' ';
        }
        cout << endl;
    }

    cout << "hi";
}