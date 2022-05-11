#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define printV(vi) fo(i, 0, vi.size()) cout << vi[i] << ' '
#define fo(i, s, n) for (ll i = s; i < n; i++)
#define INF 10e10+7
#define gcd __gcd 				  // gcd(4, 6) = 2, gcd (30, 90) = 30, greatest common divisor
#define PI 3.14159265
#define bpl __builtin_popcountll   // 4 --> 100 --> bpl = 1, 5 --> 101 --> bpl = 2, 6 --> 110 --> bpl = 2
typedef pair<ll,ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void solve() {
	string s;
	map<string, int> m;
	cin >> s;
	
	
	for (int i = 2; i <= s.length()/2; i++) {
		for (int j = 0; j < s.length()-i; j++) {
			string temp = "";
			int count = 1;
			for (int k = 0; k < i; k++) {
				temp += s[j+k];
			}
			
			// Check setiap string dengan panjang i dari 0 - s.length-i
			for (int l = j+1; l <= s.length()-i; l++) {
				string check = "";
				for (int m = 0; m < i; m++) {
					check += s[l+m];
				}
				
//				cout << temp << ' ' << check << endl;
				if (check == temp) count++;
			}
			
			if (count != 1) m.insert({temp, count});
		}
	}	
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << ' ' << it->second << endl;
	}
}

int main() {
	solve();
	
    return 0;
}
