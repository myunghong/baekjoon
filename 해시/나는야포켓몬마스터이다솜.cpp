#include<algorithm>
#include<iostream>
#include<unordered_map>
#include<cctype>
using namespace std;
unordered_map<string, int> poke;
string pokedogam[100005];
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,m; cin >> n >> m; //n은 포켓몬 수, m은 문제 수
    for(int i = 0; i<n; i++){
        cin >> pokedogam[i];
        poke[pokedogam[i]] = i+1;
    }
    for(int i = 0; i<m; i++){
        string prob;
        cin >> prob;
        if(isdigit(prob[0])){
            cout << pokedogam[stoi(prob)-1] << '\n';
        }
        else cout << poke[prob] << '\n';
    }
    return 0;
}