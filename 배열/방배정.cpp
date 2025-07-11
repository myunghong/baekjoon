#include<algorithm>
#include<iostream>
using namespace std;
int arr[2][7];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,k,cnt = 0; cin >> n >> k;
    for(int i = 0; i<n; i++){
        int sung, grade;
        cin >> sung >> grade;
        arr[sung][grade]++;
    }

    for(int i = 0; i<2; i++){
        for(int j = 1; j<7; j++){
            cnt += (arr[i][j] + k -1) / k;
        }
    }
    cout << cnt;
}