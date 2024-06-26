#include<algorithm>
#include<iostream>
using namespace std;
int board[500005];
int board2[500005];
int ans[500005];
int main(void){
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    sort(board, board + n);
    int m; cin >> m;
    for(int i = 0; i<m; i++){
        cin >> board2[i];
    }
    for(int i = 0; i<m; i++){
        if(binary_search(board, board + n, board2[i])){
            ans[i] = 1;
        }
    }
    for(int i = 0; i<m; i++){
        cout << ans[i] << ' ';
    }
    return 0;
}