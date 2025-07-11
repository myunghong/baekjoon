#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int board[3];
    while(true){
        int a,b,c; cin >> a >> b >> c;
        board[0] = a; board[1] = b; board[2] = c;
        if(a == 0 && b == 0 && c == 0) break;
        sort(board, board+3);
        if(board[0]*board[0] + board[1]*board[1] == board[2]*board[2]) cout << "right\n";
        else cout << "wrong\n";
    }
    return 0;
}