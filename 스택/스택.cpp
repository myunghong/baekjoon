#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int arr[100000];
int idx = 0;

void push(int n){
    arr[idx] = n;
    idx++;
}
void top(){
    if(idx == 0) cout << "-1\n";
    else cout << arr[idx-1] << '\n';
}
void pop(){
    if(idx == 0) cout << "-1\n";
    else {
        cout << arr[idx-1] << '\n';
        idx--;
    }
}
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,k; cin >> n;
    for(int i = 0; i<n; i++){
        string str; cin >> str;
        if(str == "push"){
            cin >> k;
            push(k);
        }
        else if(str =="top"){
            top();
        }
        else if(str == "size"){
            cout << idx << '\n';
        }
        else if(str == "pop"){
            pop();
        }
        else if(str == "empty"){
            if(idx == 0) cout << "1\n";
            else cout << "0\n";
        }
    }
    return 0;
}
