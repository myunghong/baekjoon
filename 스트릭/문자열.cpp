#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main(void){
    string board[100];
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> board[i];
    }
    for(int i = 0; i<t; i++){
        cout << board[i][0] << board[i][board[i].length()-1] << '\n';
    }

    return 0;
}