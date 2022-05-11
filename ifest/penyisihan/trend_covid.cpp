#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define printV(vi) fo(i, 0, vi.size()) cout << vi[i] << ' '
#define fo(i, s, n) for (ll i = s; i < n; i++)
#define INF 10e10+7
#define gcd __gcd 				  // gcd(4, 6) = 2, gcd (30, 90) = 30, greatest common divisor
#define PI 3.14159265
#define bpl __builtin_popcountll   // 4 --> 100 --> bpl = 1, 5 --> 101 --> bpl = 2, 6 --> 110 --> bpl = 2
typedef pair<ll,ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void solve() {
	vi d;
	vector<float> av, sumx, sd;
	bool valid = true;
//	do {
//		int in;
//		cin >> in;
//		
//		if (isdigit(in)) {
//			d.pb(in);		
//		} else {
//			valid = false;
//			break;
//		}
//	} while (cin.get() != '\n');

	string s;
	cin >> s;
	
	
	for (int t = 0; t < s.length(); t++) {
		if (s[t] == ' ' && t != 0) {
			d.pb();
			n = "";
		} else if (!isdigit(s[t])) {
			valid = false;
			break;
		} else {
			n.insert(n.begin(), s[t]);
		}
	}
	
	for (int aa : d) {
		cout << aa << ' ';
	}

	if (valid) {
		for (int i = 0; i < d.size()-6; i++) {
			float avg = 0;
			for (int j = 0; j < 7; j++) {
				avg += d[i+j];
			}
			av.pb(avg / 7.0f);
		}
		
		for (int j = 0; j < av.size(); j++) {
			float sum = 0;
			for (int k = 0; k < 8; k++) {
				sum += pow(d[j+k] - av[j], 2);
			}
			float sdf = sqrt(sum / (d.size()-1));
			sd.pb(sdf);
		}
		
	//	for (float k : sd) cout << k << ' ';
	//	cout << endl;
	
		for (int l = 7; l < d.size(); l++) {
	//		cout << d[l] << endl;
			if (abs(d[l]-d[l-1]) < sd[l-7])) {
				cout << "flat" << ' ';
			} else if (d[l-1]-d[l] > 0) {
				cout << "up" << ' ';
			} else {
				cout << "down" << ' ';
			}
		}
	} else {
		cout << "Invalid Input" << endl;
	}
	
}

int main() {
	solve();
	
    return 0;
}
