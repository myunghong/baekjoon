#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        char a;
        int b,c; cin >> b >>a >> c;
        cout << b+c << '\n';
    }
    return 0;
}