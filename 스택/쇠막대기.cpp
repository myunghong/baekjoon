#include<algorithm>
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    stack<char> stk;
    string str;
    int cnt = 0, conti = 0, part = 0;
    getline(cin,str);
    for(int i = 0; i<str.length(); i++){
        stk.push(str[i]);
        if(str[i] == '('){
            conti = 0;
        }
        if(str[i] == ')' && conti == 0){
            stk.pop();
            stk.pop();
            cnt += stk.size();
            conti = 1;
        }
        else if(str[i] == ')' && conti == 1){
            cnt++;
            stk.pop();
            stk.pop();
        }
    }
    cout << cnt;
}