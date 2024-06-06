#include<algorithm>
#include<iostream>
using namespace std;
int board[105];
int main(void){
    int n,m; cin >> n >> m; //n은 상자의 개수, m은 바꾸는 횟수
    for(int i = 1; i<=n; i++){
        board[i] = i;
    }
    for(int i = 0; i<m; i++){
        int a,b, temp;
        cin >> a >> b;
        temp = board[a];
        board[a] = board[b];
        board[b] = temp;
    }
    for(int i = 1; i<=n; i++){
        cout << board[i] << ' ';
    }

    return 0;
}