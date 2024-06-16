#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int board[26];
int main(void){
    for(int i = 0; i<26; i++){
        board[i] = -1;
    }
    string str; cin >> str;
    for(int i = 0; i<str.length(); i++){
        if(board[str[i] - 97] == -1){
            board[str[i] - 97] = i;
        }
    }
    for(int i = 0; i<26; i++){
        cout << board[i] << ' ';
    }
    return 0;
}