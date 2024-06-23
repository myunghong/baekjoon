#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string str; cin >> str;
    int flag = 1;
    for(int i = 0; i<str.length(); i++){
        if(str[i] != str[str.length()-i-1]){
            flag = 0;
            break;
        }
    }
    cout << flag;
    return 0;
}