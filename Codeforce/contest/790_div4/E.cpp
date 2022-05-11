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
//	vi res;
	while (t--) {
		vi a;
		int n, q;
		cin >> n >> q;
		
		while (n--) {
			int in;
			cin >> in;
			a.pb(in);
		}
		
		sort(a.begin(), a.end(), greater<int>());
		
		int arr[a.size()];
		
		int max = 0;
		fill(begin(arr), end(arr), -1);
		
		while (q--) {
			int x;
			cin >> x;
		
			if (x > max) max = x;
			
			
			
			while (sum < x && count < a.size()) {
				sum += a[count];
				arr[count] = sum; 
				count++;
			}
			
			if (sum < x) {
//				res.pb(-1);
				cout << -1 << endl;
			} else {
//				res.pb(count);
				cout << count << endl;
			}
			
			map.insert({x, {count, sum}});
		}
	} 
	
	while(1) {
		cout << "Je" << endl;
	}
	
//	printV(res);
}

int main() {
	solve();
	
    return 0;
}
