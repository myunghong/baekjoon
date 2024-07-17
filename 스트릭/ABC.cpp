#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string a,b,c; cin >> a >> b >> c;

    int result1 = stoi(a) + stoi(b) - stoi(c);
    int result2 = stoi(a + b) - stoi(c);

    cout << result1 << '\n';
    cout << result2;
    return 0;
}