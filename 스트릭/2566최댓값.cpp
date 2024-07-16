#include<iostream>
#include<algorithm>
using namespace std;
int board[9][9];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int ans = 0, row, col;
    for(int i = 0; i<9; i++){
        for(int j = 0; j<9; j++){
            cin >> board[i][j];
            if(ans < board[i][j]){
                ans = board[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << ans << '\n' << row+1 << ' '<< col+1;
    return 0;
}