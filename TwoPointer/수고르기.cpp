#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 100005
int board[MAX];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,m; cin >> n >> m; //n은 배열의 크기, m은 차이
    int st = 0, en = 0;
    int result = 2000000000;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    sort(board, board+n);

    while(m != result && en < n){
        int gap = board[en] - board[st];
        if(gap < m){
            en++;
            continue;
        }
        else if(gap > m){
            result = min(result,gap);
            st++;
        }
        else{
            result = gap;
            break;
        }
        
    }


    cout << result;
    return 0;
}