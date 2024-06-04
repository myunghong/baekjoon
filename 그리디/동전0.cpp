#include<algorithm>
#include<iostream>
using namespace std;
int board[15];
int main(void){
    int n,k, idx = 0, flag = 0, cnt = 0;
    cin >> n >> k;
    for(int i = 0; i<n; i++){
        cin >> board[i];
        if(k / board[i] == 0 && flag == 0){
            idx = i-1;
            flag = 1;
        }
        if(i == n-1 && flag == 0){
            idx = i;
            flag = 1;
        }
    }
    while(k != 0){
        cnt += k / board[idx];
        k -= (k/board[idx]) * board[idx];
        idx--;
    }
    cout << cnt;
    return 0;
}