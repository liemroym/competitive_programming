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
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

int main() {
	string inp, temp;
	cin >> inp;
	
	temp = inp;
	
	if (inp[0] > 90) {
		inp[0]-=32;
	} else {
		if (inp[1] < 91) inp[0]+=32;
	}
	
	fo(i, 1, inp.length()) {
		if(inp[i] < 91) {
			inp[i]+=32;
		} else {
			inp = temp;
			break;
		}
	}
	
	cout << inp;
    return 0;
}
