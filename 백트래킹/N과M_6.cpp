#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 20
int board[MAX];
int vis[MAX];
int ans[MAX];
int min1,max1;
void foo(int a){
    if(a == min1+1){
        for(int i = 1; i<a; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    return;
    }
    for(int i = 0; i<max1; i++){
        if(vis[i] != 0 || ans[a-1] >= board[i]) continue;
        vis[i] = 1;
        ans[a] = board[i];
        foo(a+1);
        vis[i] = 0;
    }
    return;
}
int main(void){

    cin >> max1 >> min1;
    for(int i =0; i<max1; i++){
        cin >> board[i];
    }
    sort(board,board + max1);
    foo(1);
    return 0;
}