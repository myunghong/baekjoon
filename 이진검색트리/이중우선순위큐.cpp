#include<algorithm>
#include<iostream>
#include<set>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        int k;
        multiset<int> s;
        cin >> k;
        for(int j = 0; j<k; j++){
            char id;
            int x;
            cin >> id >> x;
            if(id == 'I')s.insert(x);
            if(id == 'D'){
                if(s.size() == 0)continue;
                if(x == 1) s.erase(prev(s.end()));
                if(x == -1) s.erase(s.begin());
            }
        }
        if(s.size() == 0) cout << "EMPTY\n";
        else cout << *prev(s.end()) << ' ' << *s.begin() << '\n';
    }
    return 0;
}