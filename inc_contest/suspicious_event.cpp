#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> logged_in;
    int n, sus = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp < 0) {
            if (count(logged_in.begin(), logged_in.end(), -temp) == 0) {
                sus++;
            } else {
                logged_in.erase(find(logged_in.begin(), logged_in.end(), -temp));
            }
        } else {
            logged_in.push_back(temp);
        }
    }

    cout << sus;
    return 0;
}
