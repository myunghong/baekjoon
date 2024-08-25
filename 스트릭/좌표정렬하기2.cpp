#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
vector<pair<int,int>> vec;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        int a,b; cin >> a >> b;
        vec.push_back({b,a}); 
    }
    sort(vec.begin(),vec.end());
    for(auto e : vec){
        cout << e.second << ' ' << e.first << '\n';
    }
    return 0;
}