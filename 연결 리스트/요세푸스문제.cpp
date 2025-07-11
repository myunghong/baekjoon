#include<algorithm>
#include<iostream>
#include<list>
using namespace std;
int arr[5005];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,k, idx = 0, flag = 0; cin >> n >> k;
    list<int> L = {};

    for(int i = 1; i<=n; i++){
        L.push_back(i);
    }

    auto t = L.begin();
    int j = 0;

    while(!L.empty()){

        if(flag == 0){
            for(int i = j; i<k-1; i++){
                if(t == L.end()) t = L.begin();
                t++;
                if(t == L.end()) t = L.begin();
            }
            flag = 1;
            j = 0;
        }
        else{
            for(int i = j; i<k; i++){
                if(t == L.end()) t = L.begin();
                t++;
                if(t == L.end()) t = L.begin();
            }
            j = 0;
        }

        arr[idx] = *t;
        if(t != L.end()) t = L.erase(t);
        j++;
        idx++;
    }

    cout << '<' << arr[0];
    for(int i = 1; i<n; i++){
        cout << ", " << arr[i];
    }
    cout << '>';
    return 0;
}