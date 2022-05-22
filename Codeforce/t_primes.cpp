// Fenrir23
#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define printV(vi) for (auto i : vi) cout << i << ' '
#define input(a) for (int i = 0; i < a.size(); i++) cin >> a[i];
#define INF 1e9					 
#define gcd __gcd 				  // gcd(4, 6) = 2, gcd (30, 90) = 30, greatest common divisor
#define PI 3.14159265
#define bpl __builtin_popcountll   // 4 --> 100 --> bpl = 1, 5 --> 101 --> bpl = 2, 6 --> 110 --> bpl = 2
typedef pair<ll,ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void solve() {
	int n;
	cin >> n;
	
	while(n--) {
		int x;
		cin >> x;
		int count = 0;
		for (int j = 2; j < x; j++) {
			if (x % j == 0) {
				count++;
			} 
			if (count > 1) break;
		}	
		
		cout << (count == 1 ? "YES" : "NO") << endl;
	}
}

int main() {
	solve();
	
    return 0;
}