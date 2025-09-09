#include<algorithm>
#include<iostream>
#include<stack>
using namespace std;
int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    stack<string> stk;
    string str = "";
    while(1){
        getline(cin, str);
        if(str == ".") break;
        for(int i = 0; i<str.length(), i++){
            if(str[i] == "[" || str[i] == "("){
                stk.push(str[i]);
            }
            if(str[i] == "]")
        }
    }
    return 0;
}