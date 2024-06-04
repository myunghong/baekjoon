#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 100005
int board[MAX];
int vis[MAX];
int cnt = 0;

void pro(int arr[], int size, int idx){


    for(int i = 0; i<size; i++){
        if(arr[i] = i){
            vis[i] = 1;
            cnt++;
            return;
        }
        if(vis[i] != 0) continue;
        vis[i] = 1;
        if(arr[i] == arr[idx]){
            
        }
        cnt++;
        pro(arr,size,board[i]);
    }
    return;
}


int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int T,num;
    cin >> T;
    for(int i = 0; i<T; i++){
        cin >> num;
        for(int j = 0; j<num; j++){
            cin >> board[j];
        }
        cnt = 0;
        pro(board,num,0);
    }
    return 0;
}