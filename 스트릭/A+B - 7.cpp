#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    vector<pair<int,int>> v;
    int n; cin >> n;
    for(int i =0; i<n; i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    for(int i = 0; i<n; i++){
        cout << "Case #" << i+1 <<": "<< v[i].first + v[i].second << '\n';
    }

    return 0;
}