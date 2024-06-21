#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    int n; cin >> n;
    for(int j = 1; j<=2*n; j++){
        if(j <= n ){
            for(int i = j; i<n; i++){
                cout << ' ';
            }
        }
        else if(j > n){
            for(int i = 0; i<j-n; i++){
                cout << ' ';
            }
        }
        if(j <= n){
            for(int k = 0; k < 2*j - 1;k++){
                cout << '*';
            }
        }
        else if(j > n){
            for(int k = 0; k < 2*((2*n) - j) - 1; k++){
                cout << '*';
            }
        }
        cout << '\n';
    }


    return 0;
}