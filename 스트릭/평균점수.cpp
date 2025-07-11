#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int sum = 0;
    for(int i = 0; i<5; i++){
        int a; cin >> a;
        if(a<40) a = 40;
        sum += a;
    }
    cout << sum / 5;
    return 0;
}