#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a,b; cin >> a >> b;
    int mo = 1,ja = 1;
    for(int i = a; i>a-b; i--){
        mo = mo * i;
    }
    for(int i =b; i>0; i--){
        ja = ja*i;
    }
    cout << mo/ja;
    return 0;
}