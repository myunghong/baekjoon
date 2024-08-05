#include<algorithm>
#include<iostream>
using namespace std;
int board[1005];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,k; cin >> n >> k;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    sort(board, board+n);
    cout << board[n-k];
    return 0;
}