#include<algorithm>
#include<iostream>
using namespace std;
int board[100005];
int ans[100005];
int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    int index, st=0, en = n-1;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    sort(board, board+n);
    int m; cin >> m;
    for(int i = 0; i<m; i++){
        cin >> ans[i];
    }
    for(int i = 0; i<m; i++){
        int index, st=0, en = n-1;
        while(true){
            index = (st + en)/2;
            if(board[index] == ans[i]){
                cout << "1\n";
                break;
            }
            else if(en < st){
                cout << "0\n";
                break;
            }
            else if(board[index] > ans[i]){
                en = index - 1;
            }
            else if(board[index] < ans[i]){
                st = index + 1;
            }
        }
    }


    return 0;
}