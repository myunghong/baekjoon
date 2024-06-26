#include<algorithm>
#include<iostream>
using namespace std;
int boarda[500005];
int boardb[500005];
int ans[500005];
int main(void){
    int a,b, cnt = 0; cin >> a >> b;
    for(int i = 0; i<a; i++){
        cin >> boarda[i];
    }
    for(int i = 0; i<b; i++){
        cin >> boardb[i];
    }
    sort(boarda, boarda+a);
    sort(boardb, boardb+b);
    for(int i = 0; i<a; i++){
        if(binary_search(boardb, boardb+b, boarda[i])){
            cnt++;
            ans[i] = 1;
        }
    }

    cout << abs(a-cnt) << '\n';
    for(int i = 0; i<a; i++){
        if(!ans[i]){
            cout << boarda[i] << ' ';
        }
    }
    return 0;
}