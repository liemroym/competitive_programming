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

int main() {
	int n;
	
	map<int, short int> a;
	cin >> n;
	
	int x, y;
	
	fo (i, 0, n) {
		int in;
		cin >> in;
		if (a.find(in) != a.end()) {
			a[in]++;
		} else {
			a.insert({in, 1});
		}
	}
	
	map<int, short int>b(a);
	
	fo (i, 0, n-1) {
		int in;
		cin >> in;
		b[in]--;
	}
	auto it = b.begin();
	while (it->second == 0 && it != b.end()) {
		it++;
	}
	
	a[it->first]--;
	x = it->first;
	
	fo (i, 0, n-2) {
		int in;
		cin >> in;
		
		a[in]--;
	}
	
	it = a.begin();
	while (it->second == 0 && it != a.end()) {
		it++;
	}
	y = it->first;
	
	cout << x << endl << y << endl;
    return 0;
}
