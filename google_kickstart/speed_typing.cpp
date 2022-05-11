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
	fo(tc, 0, t) {
		string i, p;
		cin >> i >> p;
		if (p.length() < i.length()) {
			cout << "Case #" << tc+1 << ": IMPOSSIBLE\n";	
		} else {
			int j = 0;
			int count = 0;
			while (j < p.length() && p.length() > i.length()) {
				if (p[j] != i[j]) {
					p.erase(p.begin() + j);
					count++;
					j--;
				}
				j++;
			}
			
			for (j; j < i.length(); j++) {
				if (p[j] != i[j]) break;
			}
			if (j < i.length()) {
				cout << "Case #" << tc+1 << ": IMPOSSIBLE\n";
			} else {
				cout << "Case #" << tc+1 << ": " << count << endl;
			}
		}
	}
    return 0;
}
