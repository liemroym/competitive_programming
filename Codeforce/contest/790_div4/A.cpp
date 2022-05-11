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
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		int first = n / 1000, second = n % 1000;
		int sumf = 0, sums = 0;
		
		for (int i = 0; i < 3; i++) {
			sumf += first % 10;
			sums += second % 10;
			
			first /= 10;
			second /= 10;
		}

		if (sumf == sums) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	
	while(1) {
		cout << "EY";
	}
}

int main() {
	solve();
	
    return 0;
}
