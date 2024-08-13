#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a,b, cnt=0, mini =10001; cin >> a >> b;
    for(int i = a; i<=b; i++){
        int sosu = 0;
        for(int j = 2; j<i; j++){
            if(i%j == 0) sosu++;
            if(sosu == 1) break;
        }
        if(sosu == 0 && i != 1){
            cnt +=i;
            mini = min(i,mini);
        }
    }
    if(cnt == 0) cout << "-1";
    else cout << cnt << '\n' << mini;
    return 0;
}