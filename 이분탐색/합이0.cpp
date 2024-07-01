#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int board[10005];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    long long n, cnt = 0; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    sort(board, board+n);
    for(int i = 0; i<n; i++){
        for(int k = i+1; k<n; k++){
            int st = lower_bound(board + k+1, board + n, -1*(board[i] + board[k])) - board;
            int en = upper_bound(board + k+1, board + n, -1*(board[i] + board[k])) - board;
            cnt += en - st;
        }
    }
    cout << cnt;
    return 0;
}