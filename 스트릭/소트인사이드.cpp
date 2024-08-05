#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string str; cin >> str;
    vector<int> vec;
    for(int i = 0; i<str.length(); i++){
        vec.push_back(str[i] - '0');
    }
    sort(vec.begin(), vec.end());
    for(int i = str.length()-1; i>=0; i--){
        cout << vec[i];
    }
    return 0;
}