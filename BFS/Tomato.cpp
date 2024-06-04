#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define X first
#define Y second
#define MAX 1003

int board[MAX][MAX];
int vis[MAX][MAX];

int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int row,col;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    queue<pair<int, int>> Q;
    cin >> col >> row;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin >> board[i][j];
            if(board[i][j] == 1){
                Q.push({i,j});
            }
        }
    }
    while(!Q.empty()){
        pair<int, int> cur = Q.front();Q.pop();
        for(int i = 0; i<4; i++){
            int ny = cur.X + dy[i];
            int nx = cur.Y + dx[i];
            if(ny < 0 || ny >= row || nx < 0 || nx >= col) {continue;}
            if(board[ny][nx] != 0) {continue;}
            Q.push({ny,nx});
            board[ny][nx] = 1;
            vis[ny][nx] = vis[cur.X][cur.Y] + 1;
        }
    }
    int ans = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j< col; j++){
            if(board[i][j] == 0){
                cout << "-1";
                return 0;
            }    
            ans = max(ans, vis[i][j]);
        }
    }
    cout << ans;

    return 0;
}