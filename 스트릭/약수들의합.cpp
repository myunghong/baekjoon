#include<algorithm>
#include<iostream>
using namespace std;
int board[50005];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    while(true){
        int n, cnt = 0, result = 0; cin >> n;
        if(n == -1)break;
        for(int i = 1; i<=n/2; i++){
            if(n%i == 0){
                board[cnt++] = i;
            }
        }
        for(int i = 0; i<cnt; i++){
            result += board[i];
        }
        if(result == n){
            cout << n << ' ' << '=' << ' ';
            for(int i = 0; i<cnt; i++){
                if(i != cnt - 1) cout << board[i] << " + ";
                else cout << board[i];
            }
            cout << '\n';
        }
        else cout << n << " is NOT perfect.\n";
    }
    return 0;
}