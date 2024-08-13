#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a,b,c; cin >> a>> b>> c;
    if(c<a) cout << '1';
    else{
        if((c-a) % (a-b) == 0){
            cout << (c-a) / (a-b) +1;
        }
        else cout << (c-a) / (a-b) +2;
    }
    return 0;
}