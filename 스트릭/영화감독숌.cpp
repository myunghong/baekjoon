#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int cnt = 0, i =0,n; cin >> n;
    while(true){
        i++;
        string str = to_string(i);
        if(str.find("666") == string::npos) continue;
        else{
            cnt++;
        }
        if(cnt == n) break; 
    }
    cout << i;
    return 0;
}