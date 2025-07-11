#include<algorithm>
#include<iostream>
using namespace std;
char board[100][100];
char board1[100][100];
char board2[100][100];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a,b, cntw = 0, cntb = 0; cin >> a >> b;
    char checkwb = 'W', checkbw = 'B';
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            cin >> board[a][b];
            if(j%2==0) {
            board1[i][j] = 'W';
            board2[i][j] = 'B';
            }
            else {
            board1[i][j] = 'B';
            board2[i][j] = 'W';
            }
        }
    }
    for(int i = 0;i < a;i++) {
        for(int j = 0;j < b;j++) {
            if(board[i][j] != board1[i][j]) {
                cntw++;
            }
            if(board[i][j] != board2[i][j]) {
                cntb++;
            }
        } 
    }  
    cout << min(cntw,cntb);
    return 0;
}