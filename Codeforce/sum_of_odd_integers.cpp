#include <bits/stdc++.h>
using namespace std;

#define LL long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define printV(vi) fo(i, 0, vi.size()) cout << vi[i] << ' '
#define fo(i, s, n) for (LL i = s; i < n; i++)
#define INF 10e10+7
#define __gcd gcd 				  // gcd(4, 6) = 2, gcd (30, 90) = 30, greatest common divisor
#define PI 3.14159265
#define __builtin_popcountll bpl  // 4 --> 100 --> bpl = 1, 5 --> 101 --> bpl = 2, 6 --> 110 --> bpl = 2
typedef pair<LL,LL> pll;
typedef pair<int, int> pii;
typedef vector<LL> vll;
typedef vector<int> vi;

void solve() {
	int t;
	cin >> t;
	while (t--) {	
		int n, k;
		cin >> n >> k;

		if (k == 1) {
			cout << "Yes" << endl;
		} else {
			if (k <= ceil(n / 2.0f)) {
				int pembagi = 2;
				if (n == 5 || n == 6) pembagi = 3;
				if (n > 6) pembagi = 4;
				
				// Ganjil-ganjil / genap-genap aman 
				if (n%2 == k%2  &&  k <= n / pembagi) {
					cout << "Yes" << endl;
				} else {		
					// n genap and k !genap --> fail (2, 1 -> tidak mungkin)		
					cout << "No" << endl;
				}	
			} else {
				cout << "No" << endl;
			}
			
		}		
	}
}

int main() {
	solve();
	
    return 0;
}
