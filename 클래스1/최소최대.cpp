#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    int n, max1 = -1000001, min1 = 1000001;
    int ans;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> ans;
        if(ans < min1){
            min1 = ans;
        }
        if(ans > max1){
            max1 = ans;
        }
    }
    cout << min1 << ' ' << max1;

    return 0;
}