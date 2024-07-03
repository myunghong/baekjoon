#include<algorithm>
#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;
unordered_map<string, string> s;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,m; cin >> n >> m; //n은 저장된 수, m은 찾는 수
    for(int i = 0; i<n; i++){
        string name, pass;
        cin >> name >> pass;
        s[name] = pass;
    }
    for(int i = 0; i<m; i++){
        string name; cin >> name;
        cout << s[name] << '\n';
    }

    return 0;
}