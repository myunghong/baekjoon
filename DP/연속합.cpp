#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 100005
int board[MAX];
int sum[MAX];
int main(void){
    cin.tie(0);
    int max1 = -10000;
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i =1; i<=n; i++){
        cin >> board[i];
        if(sum[i-1] < 0) sum[i] = board[i];
        else if(sum[i-1] >= 0)sum[i] = board[i] + sum[i-1];
    }
    cout << *max_element(sum+1,sum+n+1);
    return 0;
}