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
	fo (tc, 0, t) {
		LL n, B, x, y;
		cin >> n >> B >> x >> y;
		int i;
		for (i = n; i >= 0; i--) {
			if (x*i-y*(n-i) <= B) {
				break;
			}
		}
		
		LL sum = 0;
		int j;
		cout << i << endl;
		for (j = 1; j <= i; j++) {
			cout << sum << endl;
			sum += x*j;
		}
		
		for (int k=1; k <= (n-i); k++) {
			cout << sum << endl;
			sum -= y*k;
		}
		
		cout << sum << endl;
	}
    return 0;
}
