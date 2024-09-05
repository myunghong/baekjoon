#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a,b,c,d; cin >> a >> b;
    cin >> c >> d;
    int ja = a * d + b*c, mo = b*d;
    int resultja = ja, resultmo = mo;
    for(int i = 2; i<=min(ja,mo); i++){
        if(resultja%i == 0 && resultmo % i == 0){
            resultja = ja/i;
            resultmo = mo/i;
            i=2;
        }
    }
    cout << resultja << ' ' << resultmo;
    return 0;
}