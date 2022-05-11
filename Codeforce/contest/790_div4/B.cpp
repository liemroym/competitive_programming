#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define printV(vi) fo(i, 0, vi.size()) cout << vi[i] << ' '
#define fo(i, s, n) for (ll i = s; i < n; i++)
#define INF 1e9
#define gcd __gcd 				  // gcd(4, 6) = 2, gcd (30, 90) = 30, greatest common divisor
#define PI 3.14159265
#define bpl __builtin_popcountll   // 4 --> 100 --> bpl = 1, 5 --> 101 --> bpl = 2, 6 --> 110 --> bpl = 2
typedef pair<ll,ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void solve() {
	int t;
	cin >> t;
	
	while (t--) {
		vi a;

		int n, min = INF;
		cin >> n;
		
		while (n--) {
			int inp;
			cin >> inp;
			a.pb(inp);
			
			if (inp < min) min = inp;
		} 
		
		ll sum = 0;
		for (int i = 0; i < a.size(); i++) {
			sum += a[i] - min;
		}
		
		cout << sum << endl;
	}
}

int main() {
	solve();
	
    return 0;
}
