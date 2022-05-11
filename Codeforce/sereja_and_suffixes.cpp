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

void solve() {
	/*
	use short int (2 bytes -> ~32200 max)
	max 256MB, 10^5 n, m, 
	*/
	int n, m;
	cin >> n >> m;
	
	int count[100000];
	int countOr[100000];
	int distinct[n];
	
	fill(begin(count), end(count), 0);
	fill(begin(countOr), end(countOr), 0);
	
	vi arr;
	
	while (n--) {
		int inp;
		cin >> inp;
		
		count[inp-1]++;
		countOr[inp-1]++;
		arr.pb(inp);
	}
	
	distinct[arr.size()-1] = 1;
	count[arr[arr.size()-1]-1]--;
	
	for (int i = arr.size()-2; i >= 0; i--) {
		distinct[i] = distinct[i+1];
		if (!(count[arr[i]-1] < countOr[arr[i]-1])) { // Distinct number
			distinct[i]++;
		}
		count[arr[i]-1]--;
	}
	
	while (m--) {
		int inp;
		cin >> inp;
		cout << distinct[inp-1] << endl;;
	}	
}

int main() {
	solve();
	
    return 0;
}
