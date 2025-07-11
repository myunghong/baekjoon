#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        string str; cin >> str;
        bool flag = false;
        int cnt = 1, ans = 0;
        for(int j = 0; j<str.length(); j++){
            if(str[j] == 'O'){
                ans += cnt;
                cnt++;
            }
            else{
                cnt = 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}