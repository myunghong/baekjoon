#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 1005
int board[MAX][3];
int rgb[MAX][3];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> board[i][0] >> board[i][1] >> board[i][2];
    }
    rgb[0][0] = board[0][0];
    rgb[0][1] = board[0][1];
    rgb[0][2] = board[0][2];
    

    for(int i = 1; i<n; i++){
        if(i < n-2){
            rgb[i][0] = min(rgb[i-1][1],rgb[i-1][2]) + board[i][0];
            rgb[i][1] = min(rgb[i-1][0],rgb[i-1][2]) + board[i][1];
            rgb[i][2] = min(rgb[i-1][1],rgb[i-1][0]) + board[i][2];
        }
        else{

        }
    }
    return 0;
}