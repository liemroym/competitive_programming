#include <bits/stdc++.h>
#include <string>
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
	map<string, unsigned short int> m;
	int n;
	cin >> n;
	
	while (n--) {
		string in;
		cin >> in;
		
		auto it = m.find(in);
		if (it == m.end()) {
			cout << "OK" << endl;
		} else {
			in += to_string(++it->second);
			if (m[in])
			while (m.find(in) != m.end()) {
				for (int i = 1; i < (it->second > 0 ? log10((double) it->second) + 1 : 1); i++) {
					in.erase(in.end()-1);
				}
				in += to_string(++it->second);
			} 
		
			cout << in << endl;
		}
		
		m.insert({in, 0});
			
	}
	
}

int main() {
	solve();
	
    return 0;
}
