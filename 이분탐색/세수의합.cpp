#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int board[1005];
vector<int> board2;
int main(void){
    int n, ans=0; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    for(int i = 0; i<n; i++){
        for(int k = i; k<n; k++){
            board2.push_back(board[i] + board[k]);
        }
    }
    sort(board2.begin(), board2.end());
    for(int i = 0; i<n; i++){
        for(int k = 0; k<n; k++){
            if(binary_search(board2.begin(), board2.end(), board[k] - board[i])){
                ans = max(ans, board[k]);
            }
        }
    }
    cout << ans;
    return 0;
}