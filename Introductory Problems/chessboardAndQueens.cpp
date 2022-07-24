#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<string> &board){
    if(board[row][col] == '*') return false;
    int r = row, c = col;
        while(r >= 0 && c >= 0){
            if(board[r][c] == 'Q')
                return false;
            r--;
            c--;
        }
        r = row;
        c = col;
        while(c >= 0){
            if(board[r][c] == 'Q')
                return false;
            c--;
        }
        c = col;
        while(r < 8 && c >= 0){
            if(board[r][c] == 'Q')
                return false;
            r++;
            c--;
        }
        return true;
}

void findWays(int col,vector<string> &board, int &ways){
    if(col == 8){
        ways++;
        return;
    }

    for(int row = 0; row < 8; row++){
        if(isSafe(row, col, board)){
            board[row][col] = 'Q';
            findWays(col + 1, board, ways);
            board[row][col] = '.';
        }
    }
}

int main(){

    vector<string> board(8);
    for(int i = 0; i < 8; i++){
        cin >> board[i];
    }
    int ways = 0;
    findWays(0, board, ways);

    cout << ways;

    return 0;
}