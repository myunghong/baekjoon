#include<algorithm>
#include<iostream>
#include<stack>
using namespace std;
int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string str = "";
    while(1){
        stack<char> stk;
        getline(cin, str);
        if(str == ".") break;
        for(int i = 0; i<str.length(); i++){
            if(str[i] == '[' || str[i] == '('){
                stk.push(str[i]);
            }
            if(str[i] == ']'){
                if(!stk.empty() && stk.top() == '[') stk.pop();
                else {
                cout << "no\n";
                break;
                }
            }
            else if(str[i] == ')'){
                if(!stk.empty() && stk.top() == '(') stk.pop();
                else {
                cout << "no\n";
                break;
                }
            }
            if(i == str.length() - 1) {
                if(stk.empty()) cout << "yes\n";
                else cout << "no\n";
            }
        }
    }
    return 0;
}