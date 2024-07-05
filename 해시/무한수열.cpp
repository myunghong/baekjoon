#include<algorithm>
#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<long long, long long> s;
long long n,p,q; 
long long check(long long a){
    if(s.find(a) == s.end()) s[a] = check(a/p) + check(a/q);
    return s[a];
}
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    s[0] = 1;
    cin >> n >> p >> q;
    check(n);

    if(n > n/min(p,q)) cout << s[n/p] + s[n/q];
    else cout << s[n];
    return 0;
}