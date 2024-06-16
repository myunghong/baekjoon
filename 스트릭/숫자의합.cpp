#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main(void){
    int n, result = 0; cin >> n;
    string str; cin >> str;
    for(int i = 0; i<n; i++){
        result += str[i] - '0';
    }
    cout << result;
    return 0;
}