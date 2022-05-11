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
	string s;
	map<vi, int> arr;
	int m;
	
	cin >> s >> m;
	while (m--) {
		int l, r, count = 0;
		cin >> l >> r;
		
		l--; r--;
		
		for (auto it = arr.begin(); it != arr.end(); it++) {
			if (l == it->first[0] && r >= it->first[1]) {
				count += it->second;
				l = it->first[1];
			}

			if (r == it->first[1] && l <= it->first[0]) {
				count += it->second;
				r = it->first[0];
			}	
			
			if (l == r) break;		
		}
		
		if (l != r) {	
			char x = s[l];
			int loccount = 0;
			int i = l+1;
			while (i <= r) {
				if (s[i] == x) {
					loccount++;
					count++;
				} else {
					x = s[i];
				}
				i++;
			}
			arr.insert({{l, r}, loccount});
		
		}
		
//		for (auto it = arr.begin(); it != arr.end(); it++) {
//			cout << it->first[0] << ' ' << it->first[1]  << ' ' << it->second << endl;
//		}
		
		cout << count << endl;
	}
    return 0;
}
