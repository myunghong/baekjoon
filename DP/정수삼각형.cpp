#include <algorithm>
#include <iostream>
using namespace std;
#define MAX 501
int board[MAX][MAX];
int ans[MAX][MAX];

void triangle(int a){
    ans[0][0] = board[0][0];
    for(int i = 1; i<a; i++){
        for(int j = 0; j<i; j++){
            if(ans[i][j] < ans[i-1][j] + board[i][j])ans[i][j] = ans[i-1][j] + board[i][j];
            if(ans[i][j+1] = ans[i-1][j] + board[i][j+1])ans[i][j+1] = ans[i-1][j] + board[i][j+1];
        }
    }
    cout << *max_element(ans[a-1],ans[a-1] + a);
}

int main(void){
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1;j++){
            cin >> board[i][j];
        }
    }
    triangle(n);
    return 0;
}