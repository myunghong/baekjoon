#include<algorithm>
#include<iostream>
#include<list>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    list<char> L;
    for(int i = 0; i<n; i++){
        string str; cin >> str;
        L.clear();
        auto t = L.begin();
        for(int j = 0; j<str.length(); j++){
            if(str[j] == '<'){
                if(t == L.begin()) continue;
                else t--;
            }
            else if(str[j] == '>'){
                if(t == L.end()) continue;
                else t++;
            }
            else if(str[j] == '-'){
                if(t == L.begin()) continue;
                else t = L.erase(--t);
            }
            else{
                L.insert(t,str[j]);
            }
        }
        for(auto e : L){
            cout << e;
        }
        cout << '\n';
    }
    return 0;
}