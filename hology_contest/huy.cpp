#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	int exist = 0;
	cin >> n;
	
	for(int i=6;i<100;i++){
		int sum = 0;
		int j = 1;
		while(i/(5*j) >= pow(5,j)){
			sum += i/pow(5,j);
			j++ ;
		}
		sum += i/pow(5,j);
		if(sum == n){
			exist = 1;
			cout << i << " ";
		}
	}
	
	if(exist == 0){
		cout << -1;
	}
	
	return 0;
}