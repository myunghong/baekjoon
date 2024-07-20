#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n, result = 2; cin >> n;
    for(int i = 0; i<n; i++){
        result += result - 1;
    }
    cout << result * result;
    return 0;
}