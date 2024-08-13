#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    while(true){
        int a,b,c; cin >> a >> b >> c;
        int maxx = max(a,b);
        maxx = max(maxx,c);
        if(a == b && b == 0 && c == 0) break;
        else if(maxx == a){
            if(a >= b + c) cout << "Invalid\n";
            else if(a == b && b == c) cout << "Equilateral\n";
            else if(a == b || b == c || c == a)cout << "Isosceles\n";
            else cout << "Scalene\n";
        }
        else if(maxx == b){
            if(b >= a + c) cout << "Invalid\n";
            else if(a == b && b == c) cout << "Equilateral\n";
            else if(a == b || b == c || c == a)cout << "Isosceles\n";
            else cout << "Scalene\n";
        }
        else if(maxx == c){
            if(c >= b + a) cout << "Invalid\n";
            else if(a == b && b == c) cout << "Equilateral\n";
            else if(a == b || b == c || c == a)cout << "Isosceles\n";
            else cout << "Scalene\n";
        }
    }
}