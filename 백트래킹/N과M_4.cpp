#include <algorithm>
#include <iostream>
using namespace std;
#define MAX 10
int num[10];
int vis[10];
int max1,min1;

void foo(int a){
    if(a==min1+1){
        for(int i = 1; i<a; i++) cout << num[i] << " ";
        cout << "\n";
        return;
    }
        for(int i = 1; i<=max1; i++){
            if(num[a-1] <= i){
                num[a] = i;
                foo(a+1);
            }
        }
        return;
    
}

int main(void){
    cin >> max1 >> min1;
    foo(1);
    return 0;
}