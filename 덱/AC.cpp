#include<algorithm>
#include<iostream>
#include<string>
#include<deque>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t,k; cin >> t;
    deque<int> dq;
    string str, arr;
    for(int i = 0; i< t; i++){
        cin >> str >> k;
        cin.ignore();
        getline(cin, arr);
        for(int j = 0; i<arr.length(); j++){
            if(isdigit(arr[j])) dq.push_back();
        }
        for(int j = 0; j<str.length(); j++){
            if(str[j] == 'R'){

            }
            else{
                k--;
            }
            if(k < 0) cout << "error\n";
        }
        for(auto e : dq){
            cout << e <<
        }
    }

    return 0;
}