#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        vector<float> vec;
        int a; float sum = 0,cnt = 0; cin >> a;
        for(int j = 0; j<a; j++){
            int b; cin >> b;
            sum += b;
            vec.push_back(b);
        }
        for(auto e : vec){
            if(e > sum / a) cnt++;
        }
        cout << (cnt / a) * 100 << '%' << '\n';
    }
    return 0;
}