#include <bits/stdc++.h>
using namespace std;

#define LL long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define printV(vi) fo(i, 0, vi.size()) cout << vi[i] << ' '
#define fo(i, s, n) for (LL i = s; i < n; i++)
#define INF 2e9
#define gcd __gcd  				   // gcd(4, 6) = 2, gcd (30, 90) = 30, greatest common divisor
#define PI 3.14159265
#define bpl __builtin_popcountll   // 4 --> 100 --> bpl = 1, 5 --> 101 --> bpl = 2, 6 --> 110 --> bpl = 2
typedef pair<LL,LL> pll;
typedef pair<int, int> pii;
typedef vector<LL> vll;
typedef vector<int> vi;

// First solve - failed on 2nd test
//void solve() {
//	int t;
//	cin >> t;
//	
//	while(t--) {
//		vi a;
//		int n;
//		cin >> n;
//		
//		while (n--) {
//			int in;
//			cin >> in;
//			
//			a.pb(in);
//		}
//		
//		sort(a.begin(), a.end());
//		
//		int i = 0, min = a[i], dec = 0;
//		while (i < a.size()-1) {
//			if (a[i+1]-a[i] >= min) {
//				min = a[i+1]-a[i];
//			}  else break;
//			
//			i++;
//		}
//		
//		if (i > 0) {
//			cout << a[i]-a[i-1] << endl;
//		} else {
//			cout << a[i] << endl;
//		}
//	}
//}

void solve() {
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		while (n-- ) {
			
		}
 	}
}

int main() {
	solve();
	
    return 0;
}
