#include <algorithm>
#include<iostream>
using namespace std;
#define MAX 10
int max1,min1,dup = 0;
int num1[MAX];
int arr[MAX];
int check1[10000][MAX];
void foo(int a){
    if(a == min1+1){
        for(int j = 0; j<dup+1; j++){
            int same = 0;
            for(int i = 1; i<=min1; i++){
                if(check1[j][i] == arr[i]) same++;
                if(same == min1) return;
            }
        }  
        for(int i = 1; i<a; i++) cout << arr[i] << " ";
        for(int i = 1; i<a; i++) check1[dup][i] = arr[i];
        dup++;
        cout << "\n";
        return;
    }
    for(int i = 1; i<=max1; i++){
        int k = num1[i];
        if(arr[a-1] <= k){
            arr[a] = k;
            foo(a+1);
        }
    }
    return;
}
int main(void){
    cin >> max1 >> min1;
    for(int i = 1; i<=max1; i++) cin >> num1[i];
    sort(num1,num1+(max1+1));
    foo(1);
    return 0;
}