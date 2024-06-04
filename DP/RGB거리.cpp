#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 1001
int main(void){
    int ans[MAX][3];
    int board[MAX][3];
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<3; j++){
            cin >> board[i][j];
        }
    }
    ans[0][0] = board[0][0];
    ans[0][1] = board[0][1];
    ans[0][2] = board[0][2];
    for(int i = 1; i<n; i++){
        ans[i][0] = min(ans[i-1][1],ans[i-1][2]) + board[i][0];
        ans[i][1] = min(ans[i-1][0],ans[i-1][2]) + board[i][1];
        ans[i][2] = min(ans[i-1][0],ans[i-1][1]) + board[i][2];
    }
    cout << min({ans[n-1][0],ans[n-1][1],ans[n-1][2]});
    return 0;
}