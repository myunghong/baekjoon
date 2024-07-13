#include<algorithm>
#include<iostream>
using namespace std;
int board[1000005];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,k, odd = 0; cin >> n >> k; //n은 수열의 개수, k는 삭제할 수 있는 수
    for(int i = 0; i<n; i++){
        cin >> board[i];
        if(board[i] % 2 == 1) odd++;
    }
    if(odd <= k){
        cout << n - odd;
        return 0;
    }
    int cnt = 0, ans = 0, en = 0;
    for(int i = 0; i<n; i++){
        while(en < n){
            if(board[en]%2 + cnt > k) break;
            if(board[en] % 2 == 1){
                cnt++;
            }
            en++;
        }
        ans = max(ans, en - i - cnt);
        if(board[i]%2 == 1){
            cnt--;
        }
    }
    cout << ans;
    return 0;
}