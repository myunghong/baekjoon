#include<algorithm>
#include<iostream>
#include<stack>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int k; cin >> k;
    stack<int> stck;
    for(int i = 0; i<k; i++){
        int a; cin >> a;
        if(!a && !stck.empty()) stck.pop();
        else stck.push(a);
    }
    int cnt = 0;
    while(!stck.empty()){
        cnt += stck.top();
        stck.pop();
    }
    cout << cnt;
    return 0;
}