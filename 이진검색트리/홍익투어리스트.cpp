#include<algorithm>
#include<iostream>
#include<map>
#include<set>
using namespace std;
map<int,bool> board;
set<int> ms;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,q; cin >> n >> q;
    for(int i = 1; i<=n; i++){
        cin >> board[i];
        if(board[i] == 1){
            ms.insert(i);
        }
    }
    auto it = board.begin();
    int num = 1;
    for(int i = 0; i<q; i++){
        int a,b; cin >> a >> b;
        if(a == 3){
            if(ms.empty()) cout << -1;
            
        }
        else if(a == 2){
            num += b%n;
            if(num > n){
                auto it = board.begin();
                advance(it, num-n);
                num = num-n;
            }
            else advance(it,b%n);
        
        }
        else if(a == 1){
            board[b] = !board[b];
            if(board[b] == 0){
                ms.erase(b);
            }
            else ms.insert(b);
        }
    }
    return 0;
}