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
//	*10%10

	int t;
	cin >> t;
	fo(i, 0, t) {
		int x, y, count = 0;
		cin >> x >> y;
		
		int cx = 0, cy = 0;
		int tx = x, ty = y;
//		cout << pow(tx-cx, 2) << ty-cy;
		for (tx; tx > cx; tx--) {
			for (ty; ty > cy; ty--) {
				if ((int)(sqrt(pow(tx-cx, 2) + pow(ty-cy, 2)) * 10) % 10 == 0) {
					count++;
					cout << tx << ' ' << cx << ' ' << ty << ' ' << cy << endl;
					cx = tx;
					cy = ty;
					tx = x;
					ty = y;
				} 									
				cout << cx << ' ' << x << ' ' << cy << ' ' << y << endl;
				if (cx == x && cy == y)	goto finish;
			}
		}

		
		finish: cout << count << endl; 
	}
    return 0;
}
