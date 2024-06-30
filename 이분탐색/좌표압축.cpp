#include<algorithm>
#include<iostream>
using namespace std;
int board[1000005];
int board2[1000005];
int ans[1000005];
int main(void){
    int n; cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> board[i];
        board2[i] = board[i];
    }
    sort(board2+1, board2 + n+1);
    int k = 0;
    for(int i = 1; i<=n; i++){
        if(board2[i] != board2[i-1]){
            ans[k] = board2[i];
            k++;
        }
    }
    for(int i = 1; i<=n; i++){
        board[i] = lower_bound(ans, ans+k, board[i]) - ans;
        cout << board[i] << ' ';
    }

    return 0;
}//벡터의 unique와 erase로 중복 제거하기