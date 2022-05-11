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
	fo (i, 0, t) {
		int n, sum = 0;
		cin >> n;
		
		vi count;
		count.resize(n); 
		fo (j, 0, n) {
			string inp;
			cin >> inp;
			
			fo (k, 0, n) {
				int x = inp[k] - '0';
				count[(j-k+n) % n] += x;
				sum += x;  
			}
		}
		
		int mx = 0, l = 0;
		while (l < n && mx < n) {	
			if (count[l] > mx) mx = count[l];
			l++;
		}
		
		if (mx == n) {	
			cout << sum - mx << endl;
		} else {
			cout << sum - mx + (n-mx) << endl;
		}
	}
    return 0;
}
