#include <bits/stdc++.h>
using namespace std;

int main() {
    char vowel[6] = {'a', 'o', 'y', 'e', 'u', 'i'};
    string str, newstr;

    cin >> str;
    
    for (int i = 0; i < str.length(); i++) {
        char a = str[i];
        if (a < 97) {
            a = (char)((int)str[i] + 32);
        } 
        int j = 0;
        while (j < 6 && a != vowel[j]) j++;
        if (j == 6) {
            newstr += '.';
            newstr += a;
        }
    } 

    cout << newstr;
    return 0;
}