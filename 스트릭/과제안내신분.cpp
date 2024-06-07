#include<algorithm>
#include<iostream>
using namespace std;
bool check[31];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    for(int i = 1; i<29; i++){
        int a;
        cin >> a;
        check[a] = true;
    }
    for(int i = 1; i<31; i++){
        if(check[i] == false){
            cout << i << '\n';
        }
    }

    return 0;
}