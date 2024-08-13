#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n, cnt = 6, ans = 1; cin >> n;
    if(n == 1) cout << '1';
    else{
        n--;
        while(true){
            n -= cnt;
            cnt += 6;
            ans++;
            if(n <= 0){
                cout << ans;
                break;
            }
        }
    }
    return 0;
}