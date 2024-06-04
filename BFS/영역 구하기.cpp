#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define MAX 102
#define Y first
#define X second
int board[MAX][MAX];
int areas[MAX]; 
int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int row,col,squ;
    int count = 0;
    int area = 1;
    int ax,ay,bx,by;
    int dx[4] = {-1,0,1,0};
    int dy[4] = {0,1,0,-1};
    queue <pair<int,int>> Q;
    cin >> row >> col >> squ;
    for(int i = 0; i<squ; i++){
        cin >> ax >> ay >> bx >> by;
        for(int j = 0; j<by-ay; j++){
            for(int k = 0; k < bx-ax; k++){
                board[row-by + j][ax + k] = -1;
            }
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j<col; j++){
            if(board[i][j] == 0){
                Q.push({i,j});
                count++;
                board[i][j] = count;
                area =1;
                while(!Q.empty()){
                    pair<int,int> cur = Q.front();Q.pop();
                    for(int k = 0; k<4; k++){
                        int ny = cur.Y + dy[k];
                        int nx = cur.X + dx[k];
                        if(ny >= row || ny < 0 || nx >= col || nx < 0) continue;
                        if(board[ny][nx] != 0) continue;
                        board[ny][nx] = count;
                        Q.push({ny,nx});
                        area++;
                    }
                }
                areas[count-1] = area;
            }
        }
    }
    sort(areas,areas+count);
    cout << count << "\n";
    for(int i = 0; i<count; i++){
        cout << areas[i] << " ";
    }






    return 0;
}