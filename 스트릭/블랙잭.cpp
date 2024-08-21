#include<algorithm>
#include<iostream>
using namespace std;
int board[105];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,m; cin >> n >> m;
    int ans = 0;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    for(int i = 0; i<n; i++){
        int cnt = 0;
        for(int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                cnt = board[i] + board[j] + board[k];
                if(cnt <= m && cnt> ans){
                    ans = cnt;
                }
            }
        }
    }
    cout << ans;
    return 0;
}