#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 41
void fibonacci(int a){
    int fibo[MAX][2];
    fibo[0][0] = fibo[1][1] = 1;
    fibo[0][1] = fibo[1][0] = 0;
    for(int i = 2; i<=a; i++){
        fibo[i][0] = fibo[i-1][0] + fibo[i-2][0];
        fibo[i][1] = fibo[i-1][1] + fibo[i-2][1];
    }
    cout << fibo[a][0] << ' ' << fibo[a][1] << '\n';
}
int main(void){
    int T,a;
    cin >> T;
    for(int i = 0; i<T; i++){
        cin >> a;
        fibonacci(a);
    }

    return 0;
}