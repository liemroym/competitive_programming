// 69A
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int x = 0, y = 0, z = 0;
	
	for (int i = 0; i < n; i++) {
		int xinp, yinp, zinp;
		cin >> xinp >> yinp >> zinp;
		
		x += xinp;
		y += yinp;
		z += zinp;
	}
	
	cout << (x != 0 || y != 0 || z != 0 ? "NO" : "YES");
	
    return 0;
}
