#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define printV(vi) fo(i, 0, vi.size()) cout << vi[i] << ' '
#define fo(i, s, n) for (ll i = s; i < n; i++)
#define INF 1e9
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
		vector<vi> mat;
		int n, m;
		cin >> n >> m;
		
		fo (i, 0, n) {
			vi v;
			fo (j, 0, m) {
				int in;
				cin >> in;
				v.pb(in);
			}
			mat.pb(v);
		}
		int max = 0;
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int sum = 0;
				
				int x = j, y = i;
				while (x < m && y < n) {
					sum += mat[y][x];
					x++;
					y++;	
				}
				
				x = j, y = i;
				while (x >= 0 && y >= 0) {
					sum += mat[y][x];
					x--;
					y--;
				}
				
				x = j, y = i;
				while (x < m && y >= 0) {
					sum += mat[y][x];
					x++;
					y--;
				}
				
				x = j, y = i;
				while (x >= 0 && y < n) {
					sum += mat[y][x];
					x--;
					y++;
				}
				
				sum -= 3*mat[i][j];
				
				if (sum > max) max = sum;
			}
		}
		cout << max << endl;
	}
	
}

int main() {
	solve();
	
    return 0;
}
