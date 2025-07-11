#include<algorithm>
#include<iostream>
using namespace std;
int arr[2009990];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        int a; cin >> a;
        arr[a]++;
    }
    int cnt = 0;
    int x; cin >> x;
    for(int i = 0; i<(x+1)/2; i++){
        cnt += min(arr[i], arr[x-i]);
    }
    cout << cnt;
    return 0;
}