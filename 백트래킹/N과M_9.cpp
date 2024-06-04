#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 10
int min1,max1;
int board[MAX];
int isused[1000][MAX];
int ans[MAX];
int vis[MAX];
void foo(int a){
    if(a == min1){
        for()
        for(int i = 0; i<a; i++)cout << ans[i] << ' ';
        cout << "\n";
        return;
    }
    for(int i = 0; i<max1; i++){
        if(vis[i] != 0) continue;
        vis[i] = 1;
        ans[a] = board[i];
        foo(a+1);
        vis[i] = 0;
    }
    return;
}
int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> max1 >> min1;
    for(int i = 0; i<max1; i++){
        cin >> board[i];
    }
    sort(board, board+max1);
    foo(0);
    return 0;
}