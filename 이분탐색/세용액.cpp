#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
long long board[5005];
vector<pair<int, int>> sumboard;
vector<int> ans;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> board[i];
    }
    sort(board, board+n);
    for(int i = 0; i<n; i++){
        for(int j = i+1;j<n-1; j++){
            sumboard.push_back({i,j});
        }
    }
    long long result = 3000000001, resultst, resultmid, resulten;
    for(auto e:sumboard){
        int st = e.second + 1, en = n-1;
        while(en >= st){
            int mid = (st + en)/2;
            long long cnt = board[e.first] + board[e.second] + board[mid];
            if(abs(cnt) < abs(result)){
                result = cnt;
                resultst = board[e.first];
                resultmid = board[e.second];
                resulten = board[mid];
            }
            if(cnt > 0) en = mid -1;
            else if(cnt < 0) st = mid +1;
            else if(cnt == 0) break;
        }
    }
    cout << resultst << ' ' << resultmid << ' ' << resulten;
    return 0;
}