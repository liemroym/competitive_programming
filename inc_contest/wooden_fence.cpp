#include <bits/stdc++.h>
using namespace std;

vector<int> combinations;

vector<int> comb(vector<int> arr, int n) {
    vector<int> sum
    if (n == 0) return;
    for (int i = 0; i < arr.size(); i++) {
        combinations.push_back(arr[i]);
        comb(i+1, n-1);
    }
}

int main() {
    vector<int> a;
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
        sum += temp;
    }
    sum /= 2;

    
    return 0;
}
