#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    for (int i = 0; i < 1000; i++) {
        a.push_back((char)rand()*95);
    }
    cout << a;
    return 0;
}
