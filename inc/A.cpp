#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S1,S2;
    cin >> S1 >> S2;
    char temp;
    int max = 0, tempMax;
    for(int i=0;i<N;i++){
    	temp = S1[i];
    	tempMax=1;
    	for(int j=0;j<N;j++){
    		if(j == i) continue;
    		else{
    			if(S1[j] == temp || S2[j] == temp) tempMax++;
			}
		}
		if(tempMax > max){
			max = tempMax;
		}
	}
	cout << max << endl;
}