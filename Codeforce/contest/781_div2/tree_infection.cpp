#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define fo(i, s, n) for (LL i = s; i < n; i++)
#define INF 10e10+7
#define __gcd gcd 				  // gcd(4, 6) = 2, gcd (30, 90) = 30, greatest common divisor
#define PI 3.14159265
#define __builtin_popcountll bpl  // 4 --> 100 --> bpl = 1, 5 --> 101 --> bpl = 2, 6 --> 110 --> bpl = 2
typedef pair<LL,LL> pll;
typedef pair<int, int> pii;
typedef vector<LL> vll;
typedef vector<int> vi;

int main() {
	int t;
	cin >> t;
	fo (tc, 0, t) {
		int n;
		cin >> n;
		map <int, int> count;
		fo (i, 0, n-1) {
			int inp;
			cin >> inp;
			if (count.find(inp) != count.end()) {
				count[inp]++;	
			} else {
				count.insert(mp(inp, 1));
			}
		}
		
		vi a;
		for (auto it = count.begin(); it != count.end(); it++) {
			a.pb(it->second);
		}
		
		sort(a.begin(), a.end(), greater<int>());
		
		int res = 1, x = a.size(), min = a.size(), mul = 1;
		
		bool test = true;
		while (test) {
			fo(ii, 0, a.size()) {
				cout << a[ii] << ' ';
			}
			cout << endl;
			
			test = false;
			res += x;
			fo (k, 0, a.size()) {
				a[k] -= min;
				if (a[k] > 0) {
					test = true;
					min++;
				} else {
					a.erase(a.begin()+k);
					x--;
				}
				fo(ii, 0, a.size()) {
					cout << a[ii] << ' ';
				}
				cout << endl;
			}
			
		}
		
		cout << res << endl;
	}
    return 0;
}
