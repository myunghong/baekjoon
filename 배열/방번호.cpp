#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int arr[10];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string str; cin >>str;
    for(int i = 0; i<str.length(); i++){
        int a = str[i] - '0';
        arr[a]++;
    }
    int k = *max_element(begin(arr), end(arr));
    if(arr[6] == k || arr[9] == k){
        arr[6] = (arr[9] + arr[6]+1)/2;
        arr[9] = arr[6];
    }
    k = *max_element(begin(arr), end(arr));
    cout << k;
    return 0;
}