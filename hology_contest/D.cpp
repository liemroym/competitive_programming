#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,c;
	getline(cin,s);
	getline(cin,c);
	int res=0;
	for(int i=0;i<c.length();i++){
        if (s.empty()) break;
		if(c[i] != ' '){
			int j = 0;
            while (j < s.length() && c[i] != s[j]) {
                j++;
            }
            if (c[i] == s[j]) {
                res++;
                s.erase(s.begin()+j);
            } else if (j == s.length()) break;
		} else {
			res++;
		}
	}
	if(res == c.length()){
		cout << "Bisa";
	} else {
		cout << "Tidak Bisa";
	}
    return 0;
}