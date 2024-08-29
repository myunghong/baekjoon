#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int xmin = 10005, xmax = -10005, ymin = 10005, ymax = -10005, n; cin >> n;
    for(int i = 0; i<n; i++){
        int a,b; cin >> a >> b;
        xmin = min(xmin,a);
        xmax = max(xmax,a);
        ymin = min(ymin,b);
        ymax = max(ymax,b);
    }
    cout << (xmax - xmin) * (ymax - ymin);
}