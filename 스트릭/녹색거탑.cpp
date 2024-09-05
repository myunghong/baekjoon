#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,ans = 1; cin >> n;
    for(int i = 0; i<n; i++){
        ans = ans * 2;
    }
    cout << ans;
    return 0;
}