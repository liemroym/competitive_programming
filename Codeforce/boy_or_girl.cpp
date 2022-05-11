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
	vector<char> known;
	string inp;
	
	cin >> inp;
		
	fo(i, 0, inp.length()) {
		if (find(known.begin(), known.end(), inp[i]) == known.end()) {
			known.push_back(inp[i]); 
		}
	}
		
	cout << (known.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}
