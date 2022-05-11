// YOU UNDERSTOOD IT WRONG YOU IDIOT

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
	while(t--) {
		int arr[26];
		
		fill(begin(arr), end(arr), 0);
		string s;
		cin >> s;
		
		if (s.length() > 3) {
			for (char c : s) {
				arr[int(c)-97]++;
				if (arr[int(c)-97] == 2) break;
			}
			
			int sum = 0;
			for (int i : arr) sum += i;
			
			if (sum < s.length()) {
				int i;
				for (i = 0; i < s.length()-1; i++) {
					if (s[i] != s[i+1]) break;
				}
				
				if (i != s.length()-1) {
					cout << "NO" << endl;
				} else {
					cout << "YES" << endl;
				}
			} else {
				if (s[0] == s[s.length()-1]) {
					cout << "YES" << endl;
				} else {
					cout << "NO" << endl;
				}
			}
			

		} else if (s.length() == 3) {
			
			if (s[0] == s[1] && s[1] == s[2]) cout << "YES" << endl;
			else if (s[0] == s[1] || s[1] == s[2]) cout << "NO" << endl;
			else cout << "YES" << endl;
		} else {
			cout << "YES" << endl;
		}
			
		
 	}
}


int main() {
	solve();
	
    return 0;
}
