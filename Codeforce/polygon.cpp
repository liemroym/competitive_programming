#include <bits/stdc++.h>
using namespace std;

void printBoard(vector<string> board) { 
    for (int i = 0; i < board.size(); i++) {
        cout << board[i];
    }
}

bool renameFunc(vector<string> realBoard, vector<string> currBoard) {
    if (realBoard == currBoard) return true;
    int n = realBoard.size();

    for (int i = 0; i < n; i++) {
        // Shoot horizontally
        int j = 0;
        while (currBoard[i][j] != '1' && j < n) {
            j++;
        } 

        if (realBoard[i][j] == '1') {
            currBoard[i][j] = '1';
            if (renameFunc(realBoard, currBoard)) {
                printBoard(currBoard);
                return true;
            }
        }

        // Shoot vertically
        j = 0;
        while (currBoard[j][i] != '1' && j < n) {
            j++;
        }

        if (realBoard[j][i] == '1') {
            currBoard[j][i] = '1';
            if (renameFunc(realBoard, currBoard)) {
                printBoard(currBoard);
                return true;
            }
        }
    }
    return false;
}


int main() {
    int tCount;
    cin >> tCount;

    for (int t = 0; t < tCount; t++) {
        vector<string> board, input;
        int n;
        cin >> n;
        for (int row = 0; row < n; row++) {
            string line;
            for (int col = 0; col < n; col++) {
                line += '0';
            }
            board.push_back(line);
            cin >> line;
            input.push_back(line);
        }

        if (renameFunc(input, board)) cout << "YES";    
    }

    return 0;
}