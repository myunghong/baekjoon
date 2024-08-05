#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int x,y,w,h; cin >> x >> y >> w >> h;
    int a = w - x;
    int b = h - y;
    cout << min(min(a,b),min(x,y));
    return 0;
}