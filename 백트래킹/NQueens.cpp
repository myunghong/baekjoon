#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 20
int n, ans = 0;
int check[MAX];
int vis[MAX];

void queen(int a){
    if(a == n){
        ans++;
        return;
    }
    for(int i = 0; i<n; i++){
        int flag = 0;    
        if(vis[i] != 1){
            check[a] = i;
        for(int j = 0; j<=a; j++){
            if((j != a) && (abs(a - j) == abs(check[a] - check[j]))){
                flag = 1;
                break;
            }
        }
        if(flag == 1) continue;
        vis[i] = 1;
        queen(a+1); 
        vis[i] = 0;
    }
    }
    return;
}

int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n;
    queen(0);
    cout << ans;

    return 0;
}