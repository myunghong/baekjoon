#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main(void){
    int n; cin >> n;
    int iboard[1005];
    string sboard[1005];
    for(int i = 0; i<n; i++){
        string str; int t;
        cin >> t >> str;
        iboard[i] = t;
        sboard[i] = str;
    }
    for(int i = 0; i<n; i++){
        for(int k = 0; k<sboard[i].length(); k++){
            for(int j = 0; j<iboard[i]; j++){
                cout << sboard[i][k];
            }
        }
        cout << '\n';
    }


    return 0;
}