#include<algorithm>
#include<iostream>
#include<map>
#include<set>
#include<string>
#include<vector>
using namespace std;
map<int,int> prob;
set<pair<int,int>> check;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        int num,diff; cin >> num >> diff;
        prob[num] = diff;
        check.insert({diff,num});
    }
    cin >> n;
    for(int i = 0; i<n; i++){
        string str; cin >> str;
        if(str == "recommend"){
            int k; cin >> k;
            if(k == 1) cout << (*prev(check.end())).second << '\n';
            else if(k == -1) cout << (*check.begin()).second << '\n';
        }
        else if(str == "add"){
            int num,diff; cin >> num >> diff;
            check.erase({prob[num],num});
            prob[num] = diff;
            check.insert({diff,num});
        }
        else if(str == "solved"){
            int num; cin >> num;
            check.erase({prob[num],num});
            prob.erase(num);
        }
    }
    return 0;
}