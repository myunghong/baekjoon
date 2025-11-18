#include<algorithm>
#include<iostream>
using namespace std;
int isused[10];
int board[10];
int n,m; 
void func(int k){
    if(k == m){
        for(int i = 0; i<k; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 1; i<=n; i++){
        if(isused[i] != 1){
            arr[k] = i;
            isused[i] = 1;
            func(k+1);
            isused[i] = 0;
        }
    }
}
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    func(0);
    return 0;
}