// 706B
#include <bits/stdc++.h>

using namespace std;

short int rename(vector<int> arr, int q, int begin, int end) {
	short int i = (begin + end) / 2;
	if (i == 0) { 
		return (arr[i] <= q ? 1 : 0);
	}
	if (arr[i] >= q && arr[i-1] <= q) {
		if (arr[i] == q) i++;
		return i;
	} 
	
	// i = arr.size()
	// else
	if (q > arr[i]) {
		return rename(arr, q, i+1, end);
	} else {
		return rename(arr, q, begin, i-1);
	}
}

int main() {
	vector<int> x;
	vector<tuple<int, int>> known;
	short int n, q;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		int inp;
		cin >> inp;
		x.push_back(inp); 
	}

	sort(x.begin(), x.end());
	
	cin >> q;
	
	for (int j = 0; j < q; j++) {
		int inp;
		cin >> inp;
		short int begin = 0, end = n;
		int minTop = 1e9, maxBot = -1;
		
		for (int k = 0; k < known.size(); k++) {
			int val = get<0>(known[k]);
		
			if (val > get<0>(known[maxBot]) && val <= inp) {
				maxBot = k;				
			} else if (val < get<0>(known[minTop]) && val >= inp) {
				minTop = k;
			}
		}
		
		if (maxBot != -1) begin = get<1>(known[maxBot]);
		if (minTop != 1e9) end = get<1>(known[minTop]);

		cout << begin << ' ' << end << endl;

		short int res = rename(x, inp, begin, end);
		known.push_back(make_tuple(inp, res));
		cout << res << endl;
	}

    return 0;
}


/* 
	for (int j = 0; j < q; j++) {
		int inp, count = 0;
		cin >> inp;		
		for (int i = 0; i < x.size(); i++) {
			if (x[i] <= inp) count++;
		}
		cout << count << endl;
	}
*/
