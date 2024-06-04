#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 1005
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    long long ans[MAX];
    ans[1] = 1;
    ans[2] = 2;
    for(int i = 3; i<=n; i++){
        ans[i] = (ans[i-1] + ans[i-2])%10007;
    }
    cout << ans[n] ;
    return 0;
}