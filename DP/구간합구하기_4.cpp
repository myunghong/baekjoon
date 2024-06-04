#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    int n,m;
    int board[100005];
    int cnt[100005];
    int ans[100005];
    cnt[0] = 0;
    cin >> n >> m;
    for(int i = 1;i<=n; i++){
        cin >> board[i];
        cnt[i] = cnt[i-1] + board[i];
    }
    // for(int i = 0; i<m; i++){
    //     int q,w;
    //     cin >> q >> w;
    //     ans[i] = cnt[w] - cnt[q-1];
    // }
    // for(int i =0; i<m; i++){
    //     cout << ans[i] << "\n";
    // }
    while(m--){
        int i,j;
        cin >> i >> j;
        cout << cnt[j] -cnt[i-1] << "\n"; 
    }
    return 0;
}