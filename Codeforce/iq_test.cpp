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
	int n;
	cin >> n;
	
	int inp1, inp2, inp3;
	cin >> inp1 >> inp2 >> inp3;
	
	bool outlier = (inp1 % 2 + inp2 % 2 + inp3 % 2 <= 1);  
	
	vi a = {inp1, inp2, inp3};
	
	n -= 3;

	while (n--) {
		int inp;
		cin >> inp;
		
		a.pb(inp);
	}	
	
	int i = 0;
	while (i < a.size()) {
		if (a[i] % 2 == outlier) break;
		i++;
	}
	
	cout << i+1;

    return 0;
}
