#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n, count = 0;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        a.push_back(inp);
    }
	
    sort(a.begin(), a.end());
    
    for (int j = 0; j < n; j++) {
        if (a[j] >= n) {
			count++;
        } else if (x >= n) {
        	x -= n;
        	count++;
		} else {
			x += a[j];
		}
        n--;
    }
    cout << count;

    return 0;
}
