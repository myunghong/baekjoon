#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int board[8], aflag = 1, dflag = 1;
    for(int i = 0; i<8; i++){
        cin >> board[i];
    }
    for(int i = 1; i<=8; i++){
        if(board[i-1] != i) aflag = 0;
        if(board[8-i] != i) dflag = 0;
    }
    if(aflag) cout << "ascending";
    if(dflag) cout << "descending";
    if(!aflag && !dflag) cout << "mixed";
    return 0;
}