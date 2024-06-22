#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int board[6];
    int ans[6] = {1,1,2,2,2,8};
    int cnt[6];
    for(int i=0; i<6; i++){
        cin >> board[i];
        cnt[i] = ans[i] - board[i];
    }
    for(int i = 0; i<6; i++){
        cout << cnt[i] << ' ';
    }




    return 0;
}