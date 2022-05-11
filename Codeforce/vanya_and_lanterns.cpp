#include <bits/stdc++.h>
using namespace std;

#define LL long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define printV(vi) fo(i, 0, vi.size()) cout << vi[i] << ' '
#define fo(i, s, n) for (LL i = s; i < n; i++)
#define INF 10e10+7
#define __gcd gcd 				  // gcd(4, 6) = 2, gcd (30, 90) = 30, greatest common divisor
#define PI 3.14159265
#define __builtin_popcountll bpl  // 4 --> 100 --> bpl = 1, 5 --> 101 --> bpl = 2, 6 --> 110 --> bpl = 2
typedef pair<LL,LL> pll;
typedef pair<int, int> pii;
typedef vector<LL> vll;
typedef vector<int> vi;

void solve() {
	vi v;
	int n, l;
	
	cin >> n >> l;
	
	fo(i, 0, n) {
		int in;
		cin >> in;
		v.pb(in);
	}
	
	sort (v.begin(), v.end());
	double d = max(v[0], l-v[n-1]);
	
	fo (i, 0, n-1) {
		if ((v[i+1]-v[i]) / 2.0 > d) d = (v[i+1]-v[i]) / 2.0;
	}
	
	printf("%.10lf", d);
}

int main() {
	solve();
	
    return 0;
}
