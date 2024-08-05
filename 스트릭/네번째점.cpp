#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a,b,c,d,e,f, ga,se;
    cin >> a >> b;
    cin >> c >> d;
    cin >> e >> f;
    if(a == c) ga = e;
    else if(c == e) ga = a;
    else if(a == e) ga = c;
    if(b == d) se = f;
    else if(b == f) se = d;
    else if(d == f) se = b;
    cout << ga << ' ' << se;
    return 0;
}