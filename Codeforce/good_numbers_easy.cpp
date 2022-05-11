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
	int q;
	cin >> q;
	
	fo(i, 0, q) {
		int inp;
		cin >> inp;
		int temp = inp;
		int pw = 0;
		while (temp > 0) {
			pw++; 
			temp /= 3;	
		}
		pw--;
		
		if (pow(3, pw) >= inp) {
			cout << pw << ' ' << pow(3, pw) << endl;
		} else {
			int res = pow(3, pw);
			int j = pw;
			while (j >= 0) {
				res += pow(3, j);
				if (res >= inp) {
					res -= pow(3, j);
				} else {
					res -= pow(3, j);
					res += pow(3, j+1);
				}
				j--;
			} 
			cout << pw << ' ' << res << ' ' << j << endl;
		}
	}
	
    return 0;
}
