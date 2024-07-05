#include<algorithm>
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
unordered_map<string, int> habin;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int test,n; cin >> test; //test는 테스트 케이스의 수, n은 각 케이스의 옷 수
    for(int i = 0; i<test; i++){
        int result = 1;
        cin >> n;
        for(int k = 0; k<n; k++){
            string kind, poo;
            cin >> poo >> kind;
            if(habin.find(kind) != habin.end()){
                habin[kind]++;
            }
            else {
                habin[kind] = 1;
            }
        }
        for(auto e : habin){
            result = result * (e.second+1);
        }
        cout << result-1 << '\n';
        habin.clear();
    }
    return 0;
}