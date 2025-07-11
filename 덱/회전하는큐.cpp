#include<algorithm>
#include<iostream>
#include<deque>
#include<cmath>
using namespace std;
deque<int> dq;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m, cnt = 0; cin >> n >> m;
    for(int i = 0; i<n; i++){
        dq.push_back(i+1);
    }
    for(int i = 0; i<m; i++){
        int k; cin >> k;
        int idx = find(dq.begin(), dq.end(), k) - dq.begin();
        // cout << "idx : " << idx << '\n';
        if((n)/2 >= idx){
            while(dq.front() != k){
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
                // for(auto e : dq){
                //     cout << e << ' ';
                // }
                // cout << '\n';
            }
            dq.pop_front();
            n--;
        }
        else{
            while(dq.front() != k){
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
                // for(auto e : dq){
                //     cout << e << ' ';
                // }
                // cout << '\n';
            }
            dq.pop_front();
            n--;
        }
    }
    cout << cnt;
    return 0;
}