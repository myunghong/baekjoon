#include<algorithm>
#include<iostream>
using namespace std;
bool check[43];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int cnt = 0;
    for(int i = 1; i<=10; i++){
        int a;
        cin >> a;
        a = a%42;
        if(check[a] == false){
            check[a] = true;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}