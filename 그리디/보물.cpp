#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
#define MAX 55
int boarda[MAX];
int boardb[MAX];
int main(void){
    int n, temp = 0, ans = 0; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> boarda[i];
    }
    for(int i = 0; i<n; i++){
        cin >> boardb[i];
    }
    sort(boarda, boarda + n);
    sort(boardb, boardb + n);
    for(int i = 0; i<n; i++){
        ans += boarda[n-1-i] * boardb[i];
    }
    cout << ans;
    return 0;
}