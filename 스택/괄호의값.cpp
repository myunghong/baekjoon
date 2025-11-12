#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;
int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string str;
    stack<char> stk;
    stack<int> ans;
    stack<int> tmp;
    int cnt = 0, result = 0, conti = 0, fin = 0;
    cin >> str;
    for(int i = 0; i<str.length(); i++){

        if(str[i] == '('){
            if(conti == 1){
                if(stk.empty()){
                    cnt = 0;
                }
                else{
                    tmp.push(cnt);
                    cnt = 0;
                }
            }
            stk.push(str[i]);
            conti = 0;
        }
        if(str[i] == '['){
            if(conti == 1){
                if(stk.empty()){
                    cnt = 0;
                }
                else{
                    tmp.push(cnt);
                    cnt = 0;
                }
            }
            stk.push(str[i]);
            conti = 0;
        }

        if(str[i] == ')' && conti == 0){
            if(stk.empty() || stk.top() != '('){
                cout << '0';
                return 0;
            }
            else{
                stk.pop();
                conti = 1;
                cnt += 2;
                if(stk.empty()){
                    ans.push(cnt);
                    cnt = 0;
                }
            }
        }
        else if(str[i] == ')' && conti == 1){
            if(stk.empty() || stk.top() != '('){
                cout << '0';
                return 0;
            }
            else{
                stk.pop();
                conti = 1;
                if(stk.empty()){
                    while(!tmp.empty()){
                        cnt += tmp.top();
                        tmp.pop();
                    }
                    cnt = cnt * 2;
                    ans.push(cnt);
                    cnt = 0;
                }
                else if(str[i-1] == ')'){
                    cnt = cnt * 2;
                    if(!tmp.empty()){
                        cnt += tmp.top();
                        tmp.pop();
                    }
                }
                else {
                    if(!tmp.empty()){
                        cnt += tmp.top();
                        tmp.pop();
                    }
                    cnt = cnt * 2;
                }
            }
        }

        if(str[i] == ']' && conti == 0){
            if(stk.empty() || stk.top() != '['){
                cout << '0';
                return 0;
            }
            else{
                stk.pop();
                conti = 1;
                cnt += 3;
                if(stk.empty()){
                    ans.push(cnt);
                    cnt = 0;
                }
            }
        }

        else if(str[i] == ']' && conti == 1){
            if(stk.empty() || stk.top() != '['){
                cout << '0';
                return 0;
            }
            else{
                stk.pop();
                conti = 1;
                if(stk.empty()){
                    while(!tmp.empty()){
                        cnt += tmp.top();
                        tmp.pop();
                    }
                    cnt = cnt * 3;
                    ans.push(cnt);
                    cnt = 0;
                }
                else if(str[i-1] == ']'){
                    cnt = cnt * 3;
                    if(!tmp.empty()){
                        cnt += tmp.top();   
                        tmp.pop();
                    }            
                }
                else {
                    if(!tmp.empty()){
                        cnt += tmp.top();   
                        tmp.pop();
                    }            
                    cnt = cnt * 3;
                }
            }
        }
        cout << i << " round  cnt: " << cnt << " tmp: " << (!tmp.empty() ? tmp.top() : 0)<< " ans: " << (!ans.empty()? ans.top() : 0) << '\n';
    }
    if(!stk.empty()){
        cout << '0';
        return 0;
    }
    while(!ans.empty()){
        result += ans.top();
        ans.pop();
    }
    cout << result;
    return 0;
}