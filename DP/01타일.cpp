#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 1000005
int ans[MAX];
int main(void){
    int n; cin >> n;
    ans[0] = 0;
    ans[1] = 1;
    ans[2] = 2;
    ans[3] = 3;
    for(int i = 4; i<=n; i++){
        ans[i] = (ans[i-1] + i/2)%15746;
    }
    cout << ans[n];
    return 0;
}