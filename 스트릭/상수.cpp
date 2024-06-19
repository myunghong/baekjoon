#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main(void){
    string str1, str2, max1;
    cin >> str1 >> str2;
    for(int i = 2; i >= 0; i--){
        if(str1[i] > str2[i]){
            max1 = str1;
            break;
        }
        else if (str1[i] < str2[i]){
            max1 =  str2;
            break;
        }
    }
    for(int i = 2; i >= 0; i--){
        cout << max1[i];
    }
    return 0;
}