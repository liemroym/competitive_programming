#include <bits/stdc++.h>
using namespace std;

long long zero(long long n){
	long long count=0;
	while(n>0){
		n/=5;
		count+=n;
	}
	return count;
}

int main()
{
	long long n;
	cin >> n;
	
	long long low = 0;
	long long high = 1e10;
	while(low<high){
		long long mid = (low+high)/2;
		if(zero(mid) < n){
			low=mid+1;
		}else{
			high=mid;
		}
	}
	if(zero(low) != n){
		cout << -1;
		return 0;
	}else{
		while(zero(low)==n){
			cout << low << " ";
			low++;
		}
		return 0;
	}	
}