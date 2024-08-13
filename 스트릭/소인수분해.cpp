#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 2; i<=n; i++){
        if(n%i == 0){
            cout << i << '\n';
            n = n/i;
            i = 1;
        }
    }
    return 0;
}