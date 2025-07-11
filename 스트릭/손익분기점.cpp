#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a,b,c; cin >> a >> b >> c;
    if(c-b > 0)cout << (a/(c-b))+1;
    else cout << "-1";
    return 0;
}