#include<algorithm>
#include<iostream>
using namespace std;
int board[111][111];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        int a,b; cin >> a >> b;
        for(int j = a; j<a + 10; j++){
            for(int k = b; k<b+10; k++){
                board[j][k] = 1;
            }
        }
    }
    int result = 0;
    for(int i = 0; i<100; i++){
        for(int j = 0; j<100; j++){
            if(board[i][j] == 1) result++;
        }
    }
    cout << result;
    return 0;
}