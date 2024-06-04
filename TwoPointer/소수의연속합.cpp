#include <algorithm>
#include<iostream>
#include<cstring>
using namespace std;
bool isprime[4000005];
int main(void){
    int st = 0, en = 0, cnt = 0, sum = 0, n; cin >> n;
    isprime[0] = false;
    isprime[1] = false;
    memset(isprime+2, true, sizeof(isprime));
    for(int i = 2; i<=n; i++){
        if(isprime[i]){
            for(int j = i*2; j<=n; j+=i){
                isprime[j] = false;
            }
        }
    }
    while(st <= n && en <= n){
        if(isprime[st] == false){
            st++;
            continue;
        }
        if(isprime[en] == false){
            en++;
            continue;
        }
        sum+=en;
        if(sum == n){
            cnt++;
            sum = 0;
            st++;
            en = st;
            continue;
        }
        if(sum < n){
            en++;
            continue;
        }
        if(sum > n){
            st++;
            en = st;
            sum = 0;
        }


    }
    cout << cnt;

    return 0;
}