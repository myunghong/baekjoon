#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
pair <int,int> board[100005];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int day[12] = {0,31,59,90, 120, 151, 181, 212, 243, 273, 304, 334};
    int n, cnt = 0, fin = 0, tempfin = 0; cin >> n;
    for(int i = 0; i<n; i++){
        int temp1, temp2, temp3, temp4;
        cin >> temp1 >> temp2 >> temp3 >> temp4;
        board[i] = {day[temp1 -1] + temp2,day[temp3 -1] + temp4}; 
        if(board[i].first < 61){
            fin = max(fin,board[i].second);
        }
    }
    sort(board,board + n);
    board[n] = {0,0};
    if(fin == 0){
        cout << "0";
        return 0;
    }
    cnt++;
    tempfin = fin;
    for(int i =0; i<n; i++){
        if(fin > 334) break;
        if(board[i].first < 61) continue;

        if(board[i].second <= fin && board[i].first < fin) continue;
        if(board[i].first <= fin)tempfin = max(tempfin,board[i].second);
        if(board[i].first >= fin && board[i+1].first != board[i].first){
            fin = tempfin;
            cnt++;
        }
        if(i == (n-1) && tempfin > fin && board[i].first <= fin && fin < 335){
            fin = tempfin;
            cnt++;
        }
    }

    if(fin > 334){
        cout << cnt;
    }
    else{
        cout << "0";
    }
    return 0;
}