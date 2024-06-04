#include <algorithm>
#include <iostream>
using namespace std;
#define MAX 10

int num[MAX];
int vis[MAX];
int max1,min1;

int foo(int a){
    if(a == min1+1){
        for(int i =1; i<a; i++){
            cout << num[i] << " ";
        }
        cout << "\n";
        return 0;
    }

    for(int i = 1; i<max1+1; i++){
        if(vis[i] != 1 && num[a-1] < i){
            vis[i] = 1;
            num[a] = i;
            foo(a+1);
            vis[i] = 0;
        }
    }
    return 0;
}

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> max1 >> min1;
    foo(1);
    return 0;
}