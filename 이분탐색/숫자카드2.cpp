#include<algorithm>
#include<iostream>
using namespace std;
int board[500005];
int board2[500005];
int ans[500005];
int left(int st, int en, int fd){
    while(en > st){
                int mid = (st + en) / 2;
                if(fd > board[mid]){
                    st = mid+1;
                }
                else if(fd <= board[mid]){
                    en = mid;
                }
            }
    return st;
}
int right(int st, int en, int fd){
    while(en > st){
                int mid = (st + en) / 2;
                if(fd >= board[mid]){
                    st = mid+1;
                }
                else if(fd < board[mid]){
                    en = mid;
                }
            }
    return en;
}
int main(void){
    int n, lindex, rindex; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    sort(board, board + n);
    int m; cin >> m;
    for(int i = 0; i<m; i++){
        cin >> board2[i];
    }
    for(int i = 0; i<m; i++){
        if(binary_search(board, board + n, board2[i])){
            lindex = left(0, n, board2[i]);
            rindex = right(0,n,board2[i]);
            ans[i] = rindex - lindex;
        }
    }
    for(int i = 0; i<m; i++){
        cout << ans[i] << ' ';
    }


    return 0;
}