#include <algorithm>
#include <queue>
#include <iostream>
#include <string>

using namespace std;
#define MAX 30
#define X second
#define Y first
int board[MAX][MAX];
int areas[MAX];

int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int row;
    int count = 0;
    int area = 0;
    string strs;
    int dx[4] = {-1,0,1,0};
    int dy[4] = {0,-1,0,1};
    queue <pair<int,int>> Q; 
    cin >> row;
    for(int i = 0; i<row; i++){
            cin >> strs;
            for(int j = 0; j<row; j++){
                int k = strs[j] - 48;
                board[i][j] = k;
            }
    }
    for(int i = 0; i<row; i++){
        for(int j = 0; j<row; j++){
            if(board[i][j]==1){
                Q.push({i,j});
                count++;
                area = 1;
                board[i][j] = -1;
                while(!Q.empty()){
                    pair<int,int> cur = Q.front();Q.pop();
                    for(int k = 0; k<4; k++){
                        int nx = dx[k] + cur.X;
                        int ny = dy[k] + cur.Y;
                        if(nx < 0 || nx >= row || ny >= row || ny < 0)continue;
                        if(board[ny][nx] != 1)continue;
                        board[ny][nx] = -1;
                        Q.push({ny,nx});
                        area++;
                    }
                }
                areas[count-1] = area;
            }
        }
    }
    cout << count <<"\n";
    sort(areas,areas+count);
    for(int i = 0; i<count; i++){
        cout << areas[i] << "\n";
    }


    return 0;
}