#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0;i<n; i++){
        for(int j = i;j<n; j++){
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}