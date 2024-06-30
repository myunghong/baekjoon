#include<algorithm>
#include<iostream>
using namespace std;
int tree[1000005];
int main(void){
    int n,m; cin >> n >> m; //n은 나무의 수, m은 가져갈 길이
    for(int i = 0; i<n; i++){
        cin >> tree[i];
    }
    sort(tree, tree + n);
    int en = tree[n-1], st = 1, result = 0;
    while(en >= st){
        long long ans = 0;
        int mid = (en + st) / 2;
        for(int i = 0; i<n; i++){
            if(tree[i] > mid) ans +=tree[i]-mid;
        }

        if(ans >= m){
            result = max(mid, result);
            st = mid + 1;
        }
        else{
            en = mid - 1;
        }
    }

    cout << result;
    return 0;
}