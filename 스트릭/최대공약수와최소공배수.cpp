#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a,b,yak,bae; cin >> a >> b;
    for(int i = 1;i<=min(a,b);i++){
        if(a%i == 0 && b%i == 0) yak = i;
    }
    cout << yak << '\n';
    cout << a*b/yak;
    return 0;
}