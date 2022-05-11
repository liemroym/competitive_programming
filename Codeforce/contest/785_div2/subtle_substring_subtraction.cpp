#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
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
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		
		if (s.length() != 1) {
			int sum = 0;
			fo (i, 0, s.length()) {
				sum += int(s[i])-96;
			}
			if (s.length() % 2) {
				if (int(s[s.length()-1]) > int(s[0])) {
					sum -= 2*(int(s[0])-96);
				} else {
					sum -= 2*(int(s[s.length()-1])-96);
				}
			} 
			cout << "Alice " << sum << endl; 
		} else {
			cout << "Bob " << int(s[0]-96) << endl;
		}
		
		
	}
}

int main() {
	solve();
	
    return 0;
}
