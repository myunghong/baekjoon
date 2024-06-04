#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
using namespace std;

#define X second
#define Y first
#define MAX 100005
int board[MAX];
string way[MAX];
int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int subin, sister, ans;
    int count = 0;
    cin >> subin >> sister;
    board[subin] = 1;
    board[sister] = -1;
    queue <int> Q;
    Q.push(subin);
    while(!Q.empty()){
        int cur = Q.front();Q.pop();
        int dx[3] = {1,-1,cur};
        for(int i = 0; i<3; i++){
            int nx = nx + dx[i];
            if(nx < 0) continue;
            if(nx == sister){
                ans = nx;
                while(!Q.empty()){
                    Q.pop();
                }
                break;
            }       
        }
    }

    cout << ans << "\n";

    for(char a : way[ans]){
        cout << a << " ";
    }


    return 0;
}