#include<algorithm>
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n, cnt = 0; cin >> n;
    for(int i = 0; i<n; i++){
        int index = 0, len = 0;
        string str; cin >> str;
        char board[1000];
        for(int k = 0; k<1000; k++){
            board[k] = ' ';
        }
        for(int j = 0; j<str.length(); j++){
            if(str[j] == str[j+1]){
                len++;
                continue;
            }
            if(!binary_search(board, board+index, str[j])){
                board[index] = str[j];
                index++;
                len++;
                sort(board, board + index);
            }
            else break;
            if(len == str.length())cnt++;
        }
    }
    cout <<  cnt;
    return 0;
}