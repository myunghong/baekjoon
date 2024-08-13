#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a,b,c; cin >> a >> b >> c;
    int maxx = max(a,b);
    maxx = max(maxx,c);
    if(maxx == a){
        if(a < b + c){
            cout << a+ b+c;
        }
        else{
            cout << b+c+b+c-1;
        }
    }
    else if(maxx == b){
        if(b < a + c){
            cout << a+ b+c;
        }
        else{
            cout << a+c+a+c-1;
        }
    }
    else{
        if(c < b + a){
            cout << a+ b+c;
        }
        else{
            cout << b+a+b+a-1;
        }
    }
    return 0;
}