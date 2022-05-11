#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    string satuan[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string puluhan[10] = {"ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string belasan[9] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    
    string res;
    cin >> n;
    if (n.length() == 2) {
        res += puluhan[(n[0]-'0')-1];
        if (n[0] != '1') {
            if (n[1] != '0') {
                res += '-' + satuan[n[1]-'0'];
            }
        } else {
            res = belasan[(n[1]-'0')-1];
        }
    } else {
        res = satuan[n[0]-'0'];
    }
    cout << res << endl;
    
    return 0;
}