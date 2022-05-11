// 58A
#include <bits/stdc++.h>

using namespace std;

int main() {
	string hello = "hello";
	int idx = 0;
	string input;

	cin >> input;
	int i = 0;
	while (i < input.length() && idx < 5) {
		if (input[i] == hello[idx]) {
			idx++;
		}
		i++;
	}
	
	cout << (idx >= 5 ? "YES" : "NO"); 
    return 0;
}
