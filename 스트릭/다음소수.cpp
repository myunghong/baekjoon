#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        long long int a; cin >> a;
        while(true){
            int flag = 0;
            for(long long k = 2; k < a; k++){
                if(a % k == 0){
                    flag = 1;
                    break;
                }
                if(k >= sqrt(a)) break;
            }
            if(flag == 0 && a !=1 && a != 0){
                cout << a << '\n';
                break;
            }
            a++;
        }
    }
    return 0;
}