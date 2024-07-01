#include<algorithm>
#include<iostream>
using namespace std;
long long board[10005];
int main(void){
    int k,n; cin >> k >> n; //k는 가지고 있는 랜선의 개수, n은 필요한 랜선 수
    for(int i = 0; i<k; i++){
        cin >> board[i];
    }
    sort(board,board + k);
    long long st = 1, en = board[k-1];
    long long result = 0;
    while(en >= st){
        long long mid = (st + en)/2, cnt = 0;
        for(int i = 0; i<k; i++){
            cnt += board[i]/mid;
        }
        if(cnt >= n){
            result = max(result,mid);
            st = mid + 1;
        }
        else{
            en = mid - 1;
        }
    }
    cout << result;
    return 0;
}