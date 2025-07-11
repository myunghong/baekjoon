#include<algorithm>
#include<iostream>
#include<queue>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    queue<int> Q;
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        Q.push(i+1);
    }
    while(Q.size() != 1){
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }
    cout << Q.front();

    return 0;
}