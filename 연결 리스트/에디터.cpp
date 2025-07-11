#include<iostream>
#include<algorithm>
#include<list>
#include<string>
using namespace std;
list<char> L;
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    list<char>::iterator t = L.begin();
    string str;
    cin >> str;
    for(int i = 0; i<str.length(); i++){
        L.insert(t, str[i]);
    }
    int m;
    cin >> m;
    for(int i = 0;i <m; i++){
        char cse;
        cin >> cse;
        if(cse == 'L' && t != L.begin()) t--;
        else if(cse == 'D' && t != L.end()) t++;
        else if(cse == 'B' && t == L.begin()) continue;
        else if(cse == 'B') t = L.erase(--t);
        else if(cse == 'P'){
            char a; cin >> a;
            L.insert(t,a);
        }
    }
    for(auto e : L){
        cout << e;
    }
    return 0;
}