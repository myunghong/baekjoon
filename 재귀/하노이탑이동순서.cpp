#include<algorithm>
#include<iostream>
#include<queue>
using namespace std;
#define MAX 25
int n; 
int cnt = 0;
queue <pair<int,int>> Q;
int fst[MAX];
int snd[MAX];
int trd[MAX];
void hanoi(int a, int b, int c){
    if() return;
    
    hanoi(a,b,c);
}
int main(void){
    cin >> n;
    for(int i = 1; i<=n; i++){
        fst[i-1] = i;
    }
    hanoi(n,0,0);
    return 0;
}