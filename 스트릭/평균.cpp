#include<algorithm>
#include<iostream>
using namespace std;
float board[1005];
int main(void){
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    float max1 = *max_element(board, board + n);
    for(int i = 0; i<n; i++){
        float temp = board[i];
        board[i] = (temp / max1) * 100;
    }
    float avg = 0;
    for(int i = 0; i<n; i++){
        avg += board[i];
    }
    cout << avg / n;
    return 0;
}