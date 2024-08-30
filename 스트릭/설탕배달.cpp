#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    int five = 0, three = 0, ans = n, fivestop = 1, checkans = 0;
    while(true){
        if(fivestop) five++;
        if(ans - five*5 < 5 || !fivestop){
            fivestop = 0;
            while(five * 5 + three * 3 != ans){
                if(ans-(five*5) - ((three+1)*3) < 0){
                    if(five == 0) checkans = 1;
                    break;
                }
                three++;
            }
            if(five > 0 && five * 5 + three * 3 != ans)five--;
        }
        if(five*5 + three*3 == ans){
            checkans = 0;
            break;
        }
        if(checkans == 1){
            break;
        }
    }
    if(checkans == 0) cout << five + three;
    else cout << "-1";
    return 0;
}