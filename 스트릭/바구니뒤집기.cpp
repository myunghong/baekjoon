#include<algorithm>
#include<iostream>
using namespace std;
int board[105];
int main(void){
    int n,m; cin >> n >> m; //n은 바구니의 총 수, m은 바꿀 횟수
    for(int i = 1; i<=n; i++){
        board[i] = i;
    }
    for(int i = 0; i<m; i++){
        int a,b;
        cin >> a >> b;
        while(a!=b && a < b){
            int temp = board[a];
            board[a] = board[b];
            board[b] = temp;
            a++;
            b--;
        }
    }


    for(int i = 1; i<=n; i++){
        cout << board[i] << ' ';
    }
    return 0;
}