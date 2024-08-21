#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a,b,c,d; cin >> a >> b >> c >> d;
    if((a*d) + b <= c*d && a <= b) cout << '1';
    else if(a*(d+10000) + b <= c*(d+10000) && a > b) cout << '1'; //이부분은 없어도 상관없네
    else cout << '0';
    return 0;
}
//없어도 상관없는 이유
//같은 차수에서 a가 b보다 크다면 어차피 bigO가 성립할 수 없고
//a0와 a1이 100까지인 상황에서 n이 10000일때를 계산하면 두번째 조건을 통과할 수 없기 때문에
//어차피 a가 b보다 작다면 첫 n에 대하여 bigO가 성립할때 뒤로도 쭉 성립한다