#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,result = 0; cin >> n;
    for(int i = 0; i<n; i++){
        int k, cnt = 0; cin >> k;
        for(int j = 1; j<k; j++){
            if(k%j == 0){
                cnt++;
            }
        }
        if(cnt == 1) result++;
    }
    cout << result;
    return 0;
}