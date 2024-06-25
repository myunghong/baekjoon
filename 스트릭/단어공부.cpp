#include<algorithm>
#include<string.h>
#include<iostream>
using namespace std;
int board[26];
int main(void){
    string str;
    cin >> str;
    for(int i = 0; i<str.length(); i++){
        if((int)str[i] >= 97 && (int)str[i] <= 122){
            board[(int)str[i] - 97]++;
        }
        else if((int)str[i] <= 90 && (int)str[i] >= 65){
            board[(int)str[i] - 65]++;
        }
    }
    int ans = *max_element(board, board+26);
    int cnt = 0, index = 0;
    for(int i = 0; i<26; i++){
        if(ans == board[i]){
            ans = board[i];
            index = i;
            cnt++;
        }
    }
    if(cnt == 1){
        cout << (char)(index+65);
    }
    else{cout << '?';} 
    return 0;
}