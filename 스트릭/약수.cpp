#include<algorithm>
#include<iostream>
using namespace std;
int board[50];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    sort(board, board+n);
    if(n == 1) cout << board[0] * board[0];
    else cout << board[0] * board[n-1];
    return 0;
}