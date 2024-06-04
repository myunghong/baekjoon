#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 15
int board[MAX][MAX];
int isused[MAX][MAX];
int rightdiag[MAX];
int leftdiag[MAX];
int cnt1 = 0, cnt2 = 0;
int temp1 = 0, temp2 = 0;
int row;
void bishopwhite(int a){
    if(cnt1 > temp1) {temp1 = cnt1;}
    if(cnt1 == row - 1) return;
    for(int i = a; i < row; i++){
        for(int j = ((i%2)+1)%2; j<row; j = j+2 ){
            if(board[i][j] == 1 && isused[i][j] != 1 && rightdiag[j - i + row - 1] != 1 && leftdiag[i + j] != 1){
                isused[i][j] = 1;
                rightdiag[j - i + row - 1] = 1;
                leftdiag[i + j] = 1;
                cnt1++;
                bishopwhite(i);
                cnt1--;
                isused[i][j] = 0;
                rightdiag[j - i + row - 1] = 0;
                leftdiag[i + j] = 0;
            }
        }
    }
    return;
}
void bishopblack(int a){
    if(cnt2 > temp2) {temp2 = cnt2;}
    if(cnt2 == row - 1) return;
    for(int i = a; i < row; i++){
        for(int j = (i%2); j<row; j = j+2 ){
            if(board[i][j] == 1 && isused[i][j] != 1 && rightdiag[j - i + row - 1] != 1 && leftdiag[i + j] != 1){
                isused[i][j] = 1;
                rightdiag[j - i + row - 1] = 1;
                leftdiag[i + j] = 1;
                cnt2++;
                bishopblack(i);
                cnt2--;
                isused[i][j] = 0;
                rightdiag[j - i + row - 1] = 0;
                leftdiag[i + j] = 0;
            }
        }
    }
    return;
}
int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> row;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<row; j++){
            cin >> board[i][j];
        }
    }
    bishopwhite(0);
    bishopblack(0);
    cout << temp1 + temp2;
    return 0;
}