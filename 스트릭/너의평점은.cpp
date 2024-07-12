#include<algorithm>
#include<string>
#include<iostream>
#include<vector>
using namespace std;
vector<pair<float,float>> s;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string str, grade;
    float a, cnt = 0, ans = 0;
    for(int i = 0; i<20; i++){
        cin >> str >> a >> grade;
        if(grade != "P") cnt += a;
        if(grade == "A+") s.push_back({a,4.5});
        else if(grade == "A0") s.push_back({a,4.0});
        else if(grade == "B+") s.push_back({a,3.5});
        else if(grade == "B0") s.push_back({a,3.0});
        else if(grade == "C+") s.push_back({a,2.5});
        else if(grade == "C0") s.push_back({a,2.0});
        else if(grade == "D+") s.push_back({a,1.5});
        else if(grade == "D0") s.push_back({a,1.0});
        else if(grade == "F") s.push_back({a,0});
    }
    for(auto e : s){
        ans += (e.first/cnt) * e.second;
    }
    cout << ans;
    return 0;
}