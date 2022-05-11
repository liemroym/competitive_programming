#include <bits/stdc++.h>
using namespace std;

#define LL long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define printV(vi) fo(i, 0, vi.size()) cout << vi[i] << ' '
#define fo(i, s, n) for (LL i = s; i < n; i++)
#define INF 10e10+7
#define gcd __gcd  				   // gcd(4, 6) = 2, gcd (30, 90) = 30, greatest common divisor
#define PI 3.14159265
#define bpl __builtin_popcountll   // 4 --> 100 --> bpl = 1, 5 --> 101 --> bpl = 2, 6 --> 110 --> bpl = 2
typedef pair<LL,LL> pll;
typedef pair<int, int> pii;
typedef vector<LL> vll;
typedef vector<int> vi;

void solve() {
	int min, pdisc, maks, harga, jumlah, disc = 0;
	cin >> min >> pdisc >> maks >> harga >> jumlah;
	
	if (jumlah * harga > min) {
		disc = jumlah * harga * pdisc/100;
		if (disc > maks) disc = maks;		
	}
	
	cout << harga * jumlah - disc;
}

int main() {
	solve();
	
    return 0;
}
