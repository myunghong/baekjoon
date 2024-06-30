#include<algorithm>
#include<iostream>
using namespace std;
int board[100005];
int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    int st = 0, en = n-1, result = board[en] + board[st], ansst, ansen;
    while(en > st){
        int ans = board[en] + board[st];
        if(abs(ans) <= abs(result)){
            result = ans;
            ansen = board[en];
            ansst = board[st];
        }
        if(ans == 0){
            break;
        }
        else if(ans > 0){
            en--;
        }
        else if(ans < 0){
            st++;
        }
    }
    cout << ansst << ' ' << ansen;    
    return 0;
}