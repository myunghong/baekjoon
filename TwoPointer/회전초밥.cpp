#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int board[30005];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n, d, k, c, result = 0; cin >> n >> d >> k >> c;
    //n은 접시 수, d는 초밥의 종류 수, k는 연속으로 먹는 수, c는 쿠폰번호
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    for(int i = 0; i<n; i++){
        int cnt = 0;
        bool check[3005] = {false};
        for(int j = 0;j<k; j++){
            if(check[board[(i+j)%n]] == 0){
                check[board[(i+j)%n]] = 1;
                cnt++;
            }
        }
        if(check[c] == 0) cnt++;
        result = max(cnt, result);
    }
    cout << result;
    return 0;
}