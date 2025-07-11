#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int alpha[30];
int main(void){
    string str;
    cin >> str;
    for(int i = 0; i<str.length(); i++){
        alpha[str[i]-97]++;
    }
    for(int i = 0; i<26; i++){
        cout << alpha[i] << ' ';
    }
    return 0;
}