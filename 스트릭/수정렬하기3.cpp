#include<algorithm>
#include<iostream>
using namespace std;
int board[10005];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        int a; cin >> a;
        board[a]++;
    }
    for(int i = 0; i<10001; i++){
        for(int j = 0; j<board[i]; j++){
            cout << i << '\n';
        }
    }
    return 0;
}