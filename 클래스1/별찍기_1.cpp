#include<algorithm>
#include<iostream>
using namespace std;

int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}