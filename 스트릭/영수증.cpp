#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    long long n; cin >> n;
    int t; cin >> t;
    long long result = 0;
    for(int i =0; i<t; i++){
        int a,b;
        cin >> a >> b;
        result += a * b;
    }
    if(result == n){
        cout << "Yes";
    }
    else{
        cout << "No";
    }


    return 0;
}