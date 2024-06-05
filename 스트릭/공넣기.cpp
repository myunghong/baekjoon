#include<algorithm>
#include<iostream>
using namespace std;
int board[105];
int main(void){
    int n,m; cin >>n >> m; //n은 바구니 개수, m은 넣는 공의 개수
    for(int i = 0; i<m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        for(int j = a-1; j < b; j++){
            board[j] = c;
        }
    }
    for(int i = 0; i<n; i++){
        cout << board[i] << ' ';
    }

    return 0;
}