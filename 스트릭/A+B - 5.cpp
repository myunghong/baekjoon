#include<algorithm>
#include<iostream>
using namespace std;

int main(void){
    int ans[10000];
    int j = 0;
    while(true){
        int n,m;
        cin >> n >> m;
        if(n == 0 && m == 0)break;
        ans[j] = n+m;
        j++;
    }
    for(int i =0; i<j; i++){
        cout << ans[i] << "\n";
    }
    return 0;
}