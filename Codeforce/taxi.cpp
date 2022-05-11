// 158B
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> count{0, 0, 0, 0};
	int n;
	cin >> n;
	int inp;
	for (int i = 0; i < n; i++) {
		cin >> inp;
		count[inp-1]++;
	}
	
	// 3 paired with 1
	// count[2]: 3 pair 1
	// count[1]: 2 pair 2
	// count[0]: 2 pair 11
	// 1111 pairpair?
	// If 3 > 1 (1 becomes negative), count it as 0
	// Else (3 <= 1), pair 1 with 2
	
	count[0] -= count[2];
	if (count[0] > 0) {
		count[0] = (int) ceil(count[0] / 2.0f);
		count[1] -= count[0];
		// If negative, count[1] becomes place to count 1111 pairpair
		if (count[1] < 0) {
			count[0] += count[1];
			count[1] = (int) ceil((-count[1] * 2) / 4.0f) ;
		} else { // count[1] becomes place to count 22 pair
			count[1] = (int) ceil(count[1] / 2.0f);
		}
	} else { // No other 1s, turn 2s into 22 pair
		count[1] = (int) ceil(count[1] / 2.0f);		
		count[0] = 0;
	}
	
	cout << count[0] + count[1] + count[2] + count[3];
	
    return 0; 
}
