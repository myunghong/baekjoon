#include<algorithm>
#include<iostream>
using namespace std;
int board1[105][105];
int board2[105][105];
int board3[105][105];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,m; cin >> n >> m;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> board1[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> board2[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            board3[i][j] = board1[i][j] + board2[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << board3[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}