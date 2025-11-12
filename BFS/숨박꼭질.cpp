#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int board[200005];
int vis[200005];
int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int subin, sister;
    cin >> subin >> sister;
    board[subin] = 1;
    vis[subin] = 1;
    if(subin == sister){
        cout << 0;
        return 0;
    }
    queue <int> Q;
    Q.push(subin);

    while(!Q.empty()){
        int cur = Q.front();Q.pop();
        int dx[3] = {1,-1,cur};
        for(int i = 0; i<3; i++){
            int nx = cur + dx[i];
            if(nx < 0 || nx > 100000) continue;
            if(nx == sister){
                cout << board[cur];
                return 0;
            }
            if(vis[nx] != 0) continue;
            Q.push(nx);
            vis[nx] = 1;
            board[nx] = board[cur] + 1;
        }
    }

    return 0;
}