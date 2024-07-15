#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
string board[5];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string str;
    for(int i = 0; i<5; i++){
        cin >> board[i];
    }
    for(int i = 0; i<15; i++){
        for(int j = 0; j<5; j++){
            if(board[j][i] == NULL) continue;
            cout << board[j][i];
        }
    }
    return 0;
}