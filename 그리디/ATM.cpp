#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 1005
int board[MAX];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n, cnt = 0;
    int time1[MAX];
    time1[0] = 0;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    sort(board,board+n);
    for(int i = 1; i<=n; i++){
        time1[i] = time1[i-1] + board[i-1];
    }
    for(int i = 1; i<=n; i++){
        cnt += time1[i];
    }
    cout << cnt;
    return 0;
}