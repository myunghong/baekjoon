#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            cout << ' ';
        }
        for(int k = 0; k <= i; k++){
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}