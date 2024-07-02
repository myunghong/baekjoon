#include<algorithm>
#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
unordered_set<string> s;
int main(void){ 
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        string name, stat;
        cin >> name >> stat;
        if(stat == "enter") s.insert(name);
        else s.erase(name);
    }
    vector<string>ans(s.begin(), s.end());
    sort(ans.begin(), ans.end(), greater<string>());
    for(auto e:ans){
        cout << e << '\n';
    }
    return 0;
}