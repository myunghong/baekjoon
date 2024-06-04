#include <algorithm>
#include <iostream>
using namespace std;
int main(void){
    int ans[1005];
    int n;
    cin >> n;
    ans[1] = 1;
    ans[2] = 3;
    for(int i = 3; i<=n; i++){
        ans[i] = (ans[i-2] * 2 + ans[i-1])%10007;
    }
    cout << ans[n];
    return 0;
}