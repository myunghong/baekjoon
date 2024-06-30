#include<algorithm>
#include<iostream>
using namespace std;
int snack[1000005];
int main(void){
    int n, m; cin >> n >> m; //n은 사람 수, m은 과자의 수
    for(int i = 0; i<m; i++){
        cin >> snack[i];
    }
    sort(snack, snack + m);
    int ans = 0, en = snack[m-1], st = 1;
    while(st <= en){
        int cnt = 0;
        int mid = (en + st)/2;
        for(int i = 0; i<m; i++){
            cnt += snack[i] / mid;
        }
        if(cnt >= n){
            ans = mid;
            st = mid+1;
        }
        else{
            en = mid-1;
        }
    }
    cout << ans;

    return 0;
}