#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n/4; i++){
        cout << "long ";
    }
    cout << "int";
    return 0;
}