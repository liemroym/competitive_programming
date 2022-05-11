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
		vector<string> a;
		int n, m;
		
		cin >> n >> m;
		
		while (n--) {
			string s;
			cin >> s;
			a.pb(s);
		}
		
		int min = INF;
		
		for (int i = 0; i < a.size()-1; i++) {
			for (int j = i+1; j < a.size(); j++) {	
				int diff = 0;
				for (int k = 0; k < m; k++) {
					diff += abs((a[i][k] - '0') - (a[j][k] - '0'));
				}
				if (diff < min) min = diff;
			}
		}
		
		cout << min << endl;
	}
}

int main() {
	solve();
	
    return 0;
}
