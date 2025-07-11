#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string str1, str2; cin >> str1 >> str2;
    int arr[26] = {}, cnt = 0;
    for(int i = 0; i<str1.length(); i++){
        arr[str1[i] - 'a']++;
    }
    for(int i = 0; i<str2.length(); i++){
        arr[str2[i] - 'a']--;
    }
    for(int i = 0; i<26; i++){
        cnt += abs(arr[i]);
    }
    cout << cnt;
    return 0;
}