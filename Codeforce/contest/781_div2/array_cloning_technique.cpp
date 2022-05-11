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
		map<int, int> a;
		int n;
		cin >> n;
		
		int max = 1;
		fo (i, 0, n) {
			int x;
			cin >> x;
			if (a.find(x) != a.end()) {
				a[x]++;
				if (a[x] > max) max = a[x];
			} else {
				a.insert(mp(x, 1));
			}
		}
		
		LL count = 0;
		while (max < n) {
			count++;
			if (n - max > max) {
				count += max;
			} else {
				count += n-max;
			}
			 
			max *= 2;
		}
		
		cout << count << endl;
	}
    return 0;
}

//for(auto it = a.begin(); it != a.end(); it++) {
//	cout << it->first << " " << it->second << endl;	
//}
