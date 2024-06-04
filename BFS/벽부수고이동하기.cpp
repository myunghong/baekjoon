#include<algorithm>
#include<iostream>
#include<queue>
#include<string>
using namespace std;
#define MAX 1005
#define Y first
#define X second
int board[MAX][MAX];
int vis[MAX][MAX];
int walls[MAX];
int main(void){
    int row,col, wall = 1, cnt =0;
    string str1;
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    cin >> row >> col;
    for(int i = 0; i<row; i++){
        cin >> str1;
        for(int j = 0; j<col; j++){
            board[i][j] = str1[j] - 48;
        }
    }


    queue <pair<int,int>> Q;
    Q.push({0,0});
    vis[0][0] = 1;


    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        if(board[cur.Y][cur.X] == 1) wall--;
        if(wall < 0){
            wall++;
            continue;
        }
        for(int k = 0; k<4; k++){
            int ny = cur.Y + dy[k];
            int nx = cur.X + dx[k];
            if(nx < 0 || nx >= col || ny < 0 || ny >= row) continue;
            if(vis[ny][nx] != 0) continue;
            vis[ny][nx] = vis[cur.Y][cur.X] + 1;
            Q.push({ny,nx});
        }
    }
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << vis[i][j];
        }
        cout << "\n";
    }
    // if(vis[row-1][col-1] == 0){
    //     cout << "-1";
    // }
    // else{
    //     cout << vis[row-1][col-1];
    // }
    return 0;

}