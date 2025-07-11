#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int board[6];
    for(int i =0; i<5; i++){
        cin >> board[i];
    }
    sort(board, board+3);
    sort(board+3, board+5);
    cout << board[0] + board[3] - 50;
    return 0;

}