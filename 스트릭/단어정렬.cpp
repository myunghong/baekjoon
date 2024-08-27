#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<pair<int,string>> vec;
vector<string> vec2;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int c; cin >> c;
    for(int i = 0; i<c; i++){
        string str; cin >> str;
        vec.push_back({str.length(),str});
    }
    sort(vec.begin(),vec.end());
    for(auto e : vec){
        vec2.push_back(e.second);
    }x
    vec2.erase(unique(vec2.begin(),vec2.end()),vec2.end());
    for(auto e:vec2){
        cout << e <<'\n';
    }
    return 0;
}