#include<iostream>
using namespace std;
int board[100];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    board[0] = 0;
    board[1] = 1;
    board[2] = 1;
    for(int i = 3; i<=n; i++){
        board[i] = board[i-1] + board[i-2];
    }
    cout << board[n];
    return 0;
}