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
	fo(i, 0, t) {
		LL n;
		cin >> n;
		if (n % 9 != 0) {
			int j;
			for(j = 1; j < 10; j++) {
				if ((n+j*10) % 9 == 0) {
					n += j*10;
					break;
				} 
			}
			cout << j << endl;
			if (j < 10) {
				cout << n << endl;
			} else {
				int k;
				n *= 10;
				for (k = 1; k < 10; k++) {
					if ((n+k) % 9 == 0) {
						n += k;
						break;
					}
				}
			}
		}
	}
    return 0;
}
