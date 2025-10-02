#include<algorithm>
#include<queue>
#include<iostream>
using namespace std;
int board[510][510];
bool vis[510][510];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
queue<pair<int,int>> Q;
int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int m,n, ans = 0, tmp = 0, cnt = 0; cin >> n >> m;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> board[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(vis[i][j] || board[i][j] == 0) continue;
            Q.push({i,j});
            vis[i][j] = 1;
            if(board[i][j] == 1) tmp++;

            while(!Q.empty()){
                pair<int,int> cur = Q.front(); Q.pop();
                for(int k = 0; k<4; k++){
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];
                    if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                    if(vis[nx][ny] || board[nx][ny] != 1) continue;
                    Q.push({nx,ny});
                    vis[nx][ny] = 1;
                    tmp++;
                }
            }
            if(tmp > 0) cnt++;
            if(ans < tmp){
            ans = tmp;
            }
            // cout << "count of picture : " << cnt << "\narea of picture: " << ans << '\n';
            tmp = 0;
        }

    }

    
    cout << cnt << '\n' << ans;
}