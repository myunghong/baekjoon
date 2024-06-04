#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 300
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int board[MAX];
    int ans[MAX][2];
    int n;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> board[i];
    }
    ans[1][0] = board[0];
    ans[1][1] = 0;
    ans[2][0] = board[1];
    ans[2][1] = board[0] + board[1];
    for(int i = 3; i<=n; i++){
        ans[i][0] = max(ans[i-2][0],ans[i-2][1]) + board[i-1];
        ans[i][1] = ans[i-1][0] + board[i-1];
    }
    
    cout << max(ans[n][0],ans[n][1]);
    return 0;
}