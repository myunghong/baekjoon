#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int board[9];
    int idx = 0, max1 = 0;
    for(int i = 0; i<9; i++){
        cin >> board[i];
        if(board[i] > max1){
            idx = i;
            max1 = board[i];
        }
    }
    cout << max1 << '\n' << idx+1;


    return 0;
}