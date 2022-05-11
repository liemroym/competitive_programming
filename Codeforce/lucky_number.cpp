#include <bits/stdc++.h>

using namespace std;
void printVect(vector<int> v) {
	for (int i = 0; i < v.size(); i++) cout << v[i] << ' ';
	cout << endl;

}

int main() {
    vector<int> comb{0};
	int n;
	bool found = false;
    cin >> n;
    
    int temp = n;
    int digit = 0;
    
    while (temp != 0 && !found) {
    	temp /= 10;
    	digit++;

		int size = comb.size();
    	for (int i = 0; i < size; i++) {
    		comb.push_back(comb[i] + 4*pow(10, digit-1));
    		comb.push_back(comb[i] + 7*pow(10, digit-1));
    	}
		
		if (digit == 1) comb.erase(comb.begin()); 	
    	for (int j = 0; j < comb.size(); j++) {
    		if (n % comb[j] == 0) {
    			found = true;
    			break;
    		}
    	}	
    } 
    
    cout << (found ? "YES" : "NO");
    return 0;
}
