#include<algorithm>
#include<iostream>
using namespace std;
void foo(int a){
    int ans[a];
    ans[0] = 0;
    ans[1] = 0;
    ans[2] = 1;
    ans[3] = 1;
    for(int i =4; i<=a; i++){
        int a = 100000,b = 100000,c = 100000,d = 100000;
        if(i%3 == 0 )a = ans[i/3] + 1;
        if((i -1)%3 ==0) b = ans[i-1] + 1; //없애도 상관 없는 문장
        if(i%2 == 0)c = ans[i/2] + 1;
        d = ans[i-1] + 1;
        ans[i] = min({a,b,c,d});
    }
    cout << ans[a];
    return;
}
int main(void){
    int n;
    cin >> n;
    foo(n);
    return 0;
}