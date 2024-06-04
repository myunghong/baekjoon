#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    int n,m;
    int cnt = 0;
    int ans[10000];
    while(cin >> n >> m){
        ans[cnt] = n+m;
        cnt++;
    }
    for(int i = 0; i<cnt; i++){
        cout << ans[i] << "\n";
    }
    return 0;
}