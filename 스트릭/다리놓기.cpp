#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a; cin >> a;
    for(int i = 0; i<a; i++){
        long long n,m, mo=1, ja=1; cin >> n >> m;
        if(n > m/2){
            n = m-n;
        }
        for(long long k = m; k>m-n; k--){
            mo = mo * k;
        }
        for(long long k =n; k>0; k--){
            ja = ja*k;
        }
        cout << mo/ja << '\n';
    }
    return 0;
}