#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 100005
int board[MAX];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n, weight = 0,rope = 1; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    sort(board, board + n);
    weight = board[n-rope] * rope;
    for(int i = 1; i<=n; i++){
        if(board[n-i] * i < weight) continue;
        weight = board[n-i] * i;
    }
    cout << weight;
    return 0;
}