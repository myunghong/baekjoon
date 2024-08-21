#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int ans = 0,n; cin >> n;
    for(int i = 1; i<=n; i++){
        int j = i;
        while(true){
            ans += j%10;
            j = j/10;
            if(j == 0)break;
        }
        if(ans + i == n){
            ans = i;
            break;
        }
        else ans = 0;
    }
    cout << ans;
    return 0;
}