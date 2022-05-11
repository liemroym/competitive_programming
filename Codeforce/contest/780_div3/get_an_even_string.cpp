#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define fo(i, s, n) for (LL i = s; i < n; i++)
#define INF 10e10+7
#define __gcd gcd 				  // gcd(4, 6) = 2, gcd (30, 90) = 30, greatest common divisor
#define PI 3.14159265
#define __builtin_popcountll bpl  // 4 --> 100 --> bpl = 1, 5 --> 101 --> bpl = 2, 6 --> 110 --> bpl = 2
typedef pair<LL,LL> pll;
typedef pair<int, int> pii;
typedef vector<LL> vll;
typedef vector<int> vi;

int main() {
	int t;
	cin >> t;
	fo (i, 0, t) {
		string s;
		cin >> s;
		
		char f;
		int j = 0, count = 0;	
		while (j < s.length()) {
			if (s[j] == s[j+1]) {
				j += 2;
			} else {
				int k = j+2;
				f = s[j];
				while (k < s.length()) {
					if (s[k] == f) {
						// Jumlah di antara > 2
						if (k-j-1 > 2) {
							count += 2;
							s.erase(j);
							s.erase(k);
						} else { // Jumlah di antara <= 2
							count += k-j-1;
							fo(l, j+1, k) {
								s.erase(l);
							}
							j++;
						}
						
						break;
					} 
					k++;					
				} 
				
				if (k > s.length()) {
					j++;
					count++;
				}
			}
		}
		cout << count;
	}
    return 0;
}
