#include<algorithm>
#include<iostream>
#include<queue>
#include<string>
using namespace std;
#define X second
#define Y first
#define MAX 1005
int board[MAX][MAX];
int vis[MAX][MAX];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int row,col,wall;
    int count = 1;
    queue <pair<int,int>> Q;
    string strs;
    cin >> row >> col >> wall;
    for(int i = 0; i<row; i++){
        cin >> strs;
        for(int j = 0; j<col; j++){
            int k = strs[j] - 48;
            board[i][j] = k;
        }
    }
    Q.push({0,0});
    board[0][0] = count;
    vis[0][0] = count;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx >= col || nx < 0 || ny >= row || ny < 0) continue;
            if(vis[ny][nx] != 0) continue;
            if(wall == 0 && board[ny][nx] == 1) {
                vis[ny][nx] = 1;
                continue;
            }
            //벽을 부수는 횟수에 따라서 배열을 다르게 해야한다??
            if(board[ny][nx] == 1){
                wall--;
                vis[ny][nx] = 1;
                if(wall < 0){
                    wall = wall + count;
                    count = 1;
                    if(Q.front() != cur){
                        Q.push(cur);
                    }
                }
            }
            board[ny][nx] = board[cur.Y][cur.X] + 1;
            vis[ny][nx] = 1;
            Q.push({ny,nx});
            count++;
        }
    }


    cout << "board\n";
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << board[i][j];
        }
        cout << "\n";
    }
    cout << "visit\n";
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << vis[i][j];
        }
        cout << "\n";
    }



    return 0;
}