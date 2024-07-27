#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        int q = 0, d=0, n=0, p=0,m;
        cin >> m;
        q = m/25;
        m = m%25;
        d = m/10;
        m = m%10;
        n = m/5;
        m = m%5;
        p = m;
        cout << q << ' ' << d << ' ' << n << ' ' << m << '\n';
    }
    return 0;
}