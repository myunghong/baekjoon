#include<algorithm>
#include<iostream>
#include<deque>
#include<string>
#include<vector>
using namespace std;
deque<int> DQ;
vector<int> vec;
int main(void){
    int N,k; cin >> N;
    string str;
    for(int i = 0; i<N; i++){
        cin >> str;
        if(str == "push_front"){
            cin >> k;
            DQ.push_front(k);
        }
        else if(str == "push_back"){
            cin >> k;
            DQ.push_back(k);
        }
        else if(str == "pop_front"){
            if(DQ.empty()) vec.push_back(-1);
            else {
                vec.push_back(DQ.front());
                DQ.pop_front();
            }
        }
        else if(str == "pop_back"){
            if(DQ.empty()) vec.push_back(-1);
            else {
                vec.push_back(DQ.back());
                DQ.pop_back();
            }
        }
        else if(str == "size"){
            vec.push_back(DQ.size());
        }
        else if(str == "empty"){
            if(DQ.empty()) vec.push_back(1);
            else vec.push_back(0);
        }
        else if(str == "front"){
            if(DQ.empty()) vec.push_back(-1);
            else vec.push_back(DQ.front());
        }
        else if(str == "back"){
            if(DQ.empty()) vec.push_back(-1);
            else vec.push_back(DQ.back());
        }
    }
    for(auto e : vec){
        cout << e << '\n';
    }
    return 0;
}