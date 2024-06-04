#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    int board[10005];
    int x,n; cin >> x >> n;
    for(int i = 0; i<x; i++){
        cin >> board[i];
    }
    for(int i =0; i<x; i++){
        if(board[i] < n) cout << board[i] << ' ';
    }
    return 0;
}