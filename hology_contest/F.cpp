#include <bits/stdc++.h>
using namespace std;

int operate(char op, int a, int b) {
    switch ('op')
    {
    case '+':
        return a+b;
    case '-':
        return a-b;
    case '*':
        return a*b;
    case '/':
        return a/b;
    default:  
        return a+b;
}

int main()
{
    vector<char> op = {'+', '-', '*', '/'};
    int found = 0;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                int temp = operate(op[i], a, b)
            }
        }
    }

    cout << (found ? "Bisa" : "Tidak Bisa");
    return 0;
}