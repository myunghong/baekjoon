#include<algorithm>
#include<iostream>
#include<queue>
#include<string>
using namespace std;
int board[500][500];
int vis[500][500];
queue<pair<int,int>> Q;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string str;
    int n,m;
    cin >> n >> m;
    int dx[4] = {0,-1,0,1};
    int dy[4] = {-1,0,1,0};

    fill(&vis[0][0], &vis[0][0] + (500*500), -1);
    for(int i = 0; i<n; i++){
        cin >> str;
        for(int j = 0; j<m; j++){
            board[i][j] = str[j] - '0';
        }
    }
    vis[0][0] = 1;
    Q.push({0,0});
    while(!Q.empty()){
        pair<int,int> cur = Q.front();
        Q.pop();
        for(int i = 0; i<4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(board[nx][ny] != 1 || vis[nx][ny] != -1) continue;
            vis[nx][ny] = vis[cur.first][cur.second] + 1;
            Q.push({nx,ny});
        }
    }
    cout << vis[n-1][m-1];
    return 0;
}