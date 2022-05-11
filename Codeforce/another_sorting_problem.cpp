#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<string, int> str;
    for (int i = 0; i < n; i++) {
        string temp;
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            if (j+1 % 2 != 0) {
                temp += c;
            } else {
                int hi = (90-(int(c)-65));
                temp += (char)(90-(int(c)-65));
            }
        }
        str.insert({temp, i+1});
    }

    for (auto j = str.begin(); j != str.end(); j++) {
        cout << j->second << ' ';
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> scores, res;

//     for (int i = 0; i < n; i++) {
//         string temp;
//         cin >> temp;

//         int score = 0;
//         for (int k = 0; k < m; k++) {
//             if ((k+1) % 2 != 0) {
//                 score += ((int)temp[k] - 65)*(m-k);
//             } else {
//                 score += (90 - (int)temp[k])*(m-k);
//             }
//         }
//         scores.push_back(score);
//     }

//     res = scores;
//     sort (res.begin(), res.end());
//     for (int j = 0; j < scores.size(); j++) {
//         int idx = 0;
//         while (scores[idx] != res[j]) idx++;
//         cout << idx+1 << ' ';
//     }

//     return 0;
// }