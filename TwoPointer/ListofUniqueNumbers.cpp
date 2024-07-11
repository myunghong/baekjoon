#include<algorithm>
#include<iostream>
#include<unordered_map>
using namespace std;
#define MAX 100005
int board[MAX];
unordered_map<int,int> visit;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n, en = 0,st = 0; cin >> n;
    long long cnt = 0;
    for(int i = 0;i <n; i++){
        cin >> board[i];
    }
    board[n] = 100005;
    visit[board[n]] = 100;
    while(st < n){
        if(visit[board[en]] == 0){
            visit[board[en]]++;
            en++;
        }
        else{
            visit[board[st]]--;
            cnt += en - st;
            st++;
        }
    }
    cout << cnt;
    return 0;
}