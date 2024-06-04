#include <algorithm>
#include<iostream>
using namespace std;
long long board[100][2];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;

    board[0][0] = 0;
    board[0][1] = 0;
    board[1][0] = 0;
    board[1][1] = 1;
    for(int i = 2; i<=n; i++){
        board[i][0] = board[i-1][0] + board[i-1][1];
        board[i][1] = board[i-1][0];
    }
    cout << board[n][0] + board[n][1];
    return 0;
}