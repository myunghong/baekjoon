#include<algorithm>
#include<iostream>
using namespace std;
int ans[1000005];
int check[1000005];

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n, cnt = 0;
    cin >> n;
    ans[0] = 0;
    ans[1] = 0;
    ans[2] = 1;
    ans[3] = 1;
    check[cnt] = 1;
    cnt++;
    for(int i = 4; i<=n; i++){
        int a=100000,b=100000,c=100000;
        if(i%3==0)a = ans[i/3];
        if(i%2==0)b = ans[i/2];
        c = ans[i-1];
        int min1 = min({a,b,c});
        ans[i] = min1 + 1;
        if(min1 == a) check[i] = i/3;
        else if(min1 == b) check[i] = i/2;
        else if(min1 == c) check[i] = i-1;
    }

    cout << ans[n] << endl;
    
    while(n > 1){
        cout << n << ' ';
        int a=n,b=n,c=n;
        if(n%3==0)a = n/3;
        if(n%2==0)b = n/2;
        c = n-1;
        int min1 = min({ans[a],ans[b],ans[c]});
        if(min1 == ans[a]){
            n = a;
            check[cnt] = n;
        }
        else if(min1 == ans[b]){
            n = b;
            check[cnt] = b;
        }
        else if(min1 == ans[c]){
            n = c;
            check[cnt] = c;
        }
        cnt++;
    }
    cout << "1";
    
    return 0;
}