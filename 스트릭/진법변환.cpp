#include<algorithm>
#include<string>
#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string str;
    long long a, result = 0; cin >> str >> a;
    for(int i = 0; i<str.length(); i++){
        long long mul = pow(a,(str.length() - i - 1));
        if(65 <= str[i] && str[i] <= 90){
             result += (str[i] - 55) * mul;
        }
        else result += (str[i] - 48) * mul;
    }
    cout << result;
    return 0;
}