#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    int result = n;
    for(int i = 1; i<n; i++){
        result = result * i;
    }
    if(result == 0) cout << '1';
    else cout << result;
    return 0;
}