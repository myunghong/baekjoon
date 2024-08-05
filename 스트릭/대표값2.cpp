#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int board[5], cnt = 0;
    for(int i = 0; i<5; i++){
        cin >> board[i];
        cnt += board[i];
    }
    sort(board, board+5);
    cout << cnt/5 << '\n';
    cout << board[2];
    return 0;
}