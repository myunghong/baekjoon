#include<algorithm>
#include<iostream>
#include<queue>
using namespace std;

#define MAX 1001
#define X second
#define Y first
char board[MAX][MAX];
int jihoon[MAX][MAX];
int fire[MAX][MAX];

int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int row, col;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    int ans = 0;
    int ansi;
    int ansj;
    queue <pair<int,int>> Q;
    queue <pair<int,int>> F;
    cin >> row >> col;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> board[i][j];
            if(board[i][j] == 'J'){
                Q.push({i,j});
                jihoon[i][j] = 1;
            }
            else if(board[i][j] == '#'){
                jihoon[i][j] = -1;
                fire[i][j] = -1;

            }
            else if(board[i][j] == 'F'){
                F.push({i,j});
                fire[i][j] = 1;
            }
        }
    }
    while(!F.empty()){
        pair<int,int> fcur = F.front();F.pop();
        for(int dir = 0; dir<4; dir++){
            int fx = fcur.X + dx[dir];
            int fy = fcur.Y + dy[dir];
            if(fx >= col || fx < 0 || fy >= row || fy < 0){continue;}
            if(fire[fy][fx] != 0) {continue;}
            fire[fy][fx] = fire[fcur.Y][fcur.X] + 1;
            F.push({fy,fx}); 
        }
    }
    while(!Q.empty()){
        pair<int,int> qcur = Q.front(); Q.pop();
        for(int dir = 0; dir<4; dir++){
            int qx = qcur.X + dx[dir];
            int qy = qcur.Y + dy[dir];
            if(qx >= col || qx < 0 || qy >= row || qy < 0){
                cout << jihoon[qcur.Y][qcur.X];
                return 0;
            }
            if(jihoon[qy][qx] != 0) {continue;}
            if(fire[qy][qx] != 0 && fire[qy][qx] <= jihoon[qcur.Y][qcur.X]+1){continue;}
            jihoon[qy][qx] = jihoon[qcur.Y][qcur.X] + 1;
            Q.push({qy,qx});
        }
    }
    
    cout << "IMPOSSIBLE";
    return 0;
    }

