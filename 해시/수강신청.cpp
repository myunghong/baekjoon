#include<algorithm>
#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;
unordered_map<string, int> s;
vector<pair<int,string>> ans;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int k, l, result = 0; cin >> k >> l; //k는 수강제한인원, l은 버튼 클릭 수
    for(int i = 0; i<l; i++){
        string num;
        cin >> num;
        s[num] = i;
    }

    for(auto e : s){
        ans.push_back({e.second,e.first});
    }
    sort(ans.begin(), ans.end());
    for(auto e : ans){
        cout << e.second << '\n';
        result++;
        if(result == k) break;
    }
    return 0;
}