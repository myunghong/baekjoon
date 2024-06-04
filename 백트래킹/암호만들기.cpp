#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 20
int max1, min1;
char board[MAX];
char result[MAX];
bool vis[MAX];
void foo(int a){
    if(a == min1+1){
        int mo = 0, za = 0;
        for(int i = 1; i<a; i++){
            if(result[i] == 'a' || result[i] == 'e' || result[i] == 'i' || result[i] == 'o' || result[i] == 'u')mo++;
            else za++;
        }
        if(mo < 1 || za < 2) return;
        for(int i = 1; i < a; i++){
            cout << result[i];
        }
        cout << "\n";
        return;
    }
    for(int i = 0; i<max1; i++){
        char k = board[i];
        if(vis[i] != 1 && result[a-1] <= k){
            vis[i] = 1;
            result[a] = k;
            foo(a+1);
            vis[i] = 0;
        }
    }
    return;

}
int main(void){
    cin >> min1 >> max1;
    for(int i = 0; i<max1; i++){
        cin >> board[i];
    }
    sort(board, board+max1);
    foo(1);
    return 0;
}