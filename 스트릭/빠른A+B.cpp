#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 1000001
int a[MAX];
int b[MAX];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int t; cin >> t;
    for(int i = 0; i<t; i++){
        cin >> a[i] >> b[i];
    }
    for(int i = 0; i<t; i++){
        cout << a[i] + b[i] << '\n';
    }
    return 0;
}