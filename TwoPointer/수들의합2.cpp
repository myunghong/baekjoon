#include<algorithm>
#include<iostream>
using namespace std;
int board[10005];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,m, cnt=0; cin >> n >> m;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    for(int i = 0; i<n; i++){
        int en = i+1, sum = board[i];
        while(en < n && sum < m){
            sum += board[en];
            en++;
        }
        if(sum == m){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}