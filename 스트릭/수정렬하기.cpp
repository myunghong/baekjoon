#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    int board[1005];
    int c; cin >> c;
    for(int i; i<c; i++){
        cin >> board[i];
    }
    sort(board,board+c);
    for(int i = 0; i<c; i++){
        cout << board[i] << '\n';
    }
}