#include<algorithm>
#include<iostream>
using namespace std;
void foo(int a){
    int ans[10000];
    ans[0] = 0;
    ans[1] = 1;
    ans[2] = 2;
    ans[3] = 4;
    for(int i = 4; i<=a; i++){
        ans[i] = ans[i-3] + ans[i-2] + ans[i-1];
    }
    cout << ans[a] << "\n";
    return;
}

int main(void){
    int t;
    int n[100000];
    cin >> t;
    for(int i =0; i<t; i++){
        cin >> n[i];
    }
    for(int i =0; i<t; i++){
        foo(n[i]);
    }

    return 0;
}