#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int board[100055];
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    sort(board, board+n);
    for(int i = 0; i<n; i++){
        cout << board[i] << '\n';
    }
    return 0;
}