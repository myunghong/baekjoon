#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    vector<pair<int,int>> v;
    int n, end1 = 0, cnt = 0; cin >> n;
    for(int i = 0; i<n; i++){
        int a,b;
        cin >> a >> b;
        v.push_back({b,a});
    }
    sort(v.begin(), v.end());
    for(int i = 0; i<n; i++){
        if(v[i].second >= end1){
            end1 = v[i].first;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}