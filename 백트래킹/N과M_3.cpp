#include<algorithm>
#include<iostream>
using namespace std;

#define MAX 10
int max1,min1;
int num[MAX];
void foo(int a){
    if(a == min1){
        for(int i =0; i<a; i++){
            cout << num[i] << " ";
        }
        cout << "\n";
    return;
    }

    for(int i = 1; i<=max1; i++){
            num[a] = i;
            foo(a+1);
    }
    return;
}

int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> max1 >> min1;
    foo(0);
    return 0;
}