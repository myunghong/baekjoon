#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        int a,b,yak = 1; cin >> a >> b;
        for(int j = 1; j<=min(a,b); j++){
            if(a%j == 0 && b%j ==0) yak = j;
        }
        cout << a*b/yak << '\n';
    }
}