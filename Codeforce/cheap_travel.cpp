#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define get()
#define printV(vi) fo(i, 0, vi.size()) cout << vi[i] << ' '
#define fo(i, s, n) for (ll i = s; i < n; i++)
#define INF 10e10+7
#define __gcd gcd 				  // gcd(4, 6) = 2, gcd (30, 90) = 30, greatest common divisor
#define PI 3.14159265
#define __builtin_popcountll bpl  // 4 --> 100 --> bpl = 1, 5 --> 101 --> bpl = 2, 6 --> 110 --> bpl = 2
typedef pair<ll,ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void solve() {
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int res;
	if (float(b) / m < a) {
		res = ceil(n / m) * b;
		n = n % m;
		if (n != 0) {		
			if (b < a*n) {
				res += b;	
			} else res += a*n;
		}
	} else {
		res = n * a;	
	}
	cout << res;
}

int main() {
	solve();
	
    return 0;
}
