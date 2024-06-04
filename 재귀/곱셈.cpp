#include<algorithm>
#include<iostream>
using namespace std;
long long x, y, z,ans;


void mult(long long a){
    if(a == 1) {
        ans = ans % z;
        return;
    }
    mult(a/2);
    ans = (ans * ans) % z;
    if(a % 2 == 1) ans = ans * x % z;
    return;
}
int main(void){
    cin >> x >> y >> z;
    ans = x;
    mult(y);
    cout << ans;
    return 0;
}