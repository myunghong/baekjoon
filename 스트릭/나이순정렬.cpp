#include<algorithm>
#include<vector>
#include<iostream>
#include<string>
using namespace std;
vector<pair<int,pair<int,string>>> vec;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        int age;
        string name;
        cin >> age >> name;
        vec.push_back({age,{i,name}});
    }
    sort(vec.begin(),vec.end());
    for(auto e : vec){
        cout << e.first << ' ' << (e.second).second << '\n';
    }
    return 0;
}