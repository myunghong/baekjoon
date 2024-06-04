#include<algorithm>
#include<iostream>
using namespace std;
int board[105];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n, m, cnt=0; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    cin >> m;
    for(int i = 0; i<n; i++){
        if(board[i] == m){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}