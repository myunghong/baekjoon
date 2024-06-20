#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main(void){
    string dial; cin >> dial;
    int cnt = 0;
    for(int i = 0; i < dial.length(); i++){
        if(dial[i] == 'A' || dial[i] == 'B' || dial[i] == 'C'){
            cnt += 3;
        }
        if(dial[i] == 'D' || dial[i] == 'E' || dial[i] == 'F'){
            cnt += 4;
        }
        if(dial[i] == 'G' || dial[i] == 'H' || dial[i] == 'I'){
            cnt += 5;
        }
        if(dial[i] == 'J' || dial[i] == 'K' || dial[i] == 'L'){
            cnt += 6;
        }
        if(dial[i] == 'O' || dial[i] == 'N' || dial[i] == 'M'){
            cnt += 7;
        }
        if(dial[i] == 'P' || dial[i] == 'Q' || dial[i] == 'R' || dial[i] == 'S'){
            cnt += 8;
        }
        if(dial[i] == 'T' || dial[i] == 'U' || dial[i] == 'V'){
            cnt += 9;
        }
        if(dial[i] == 'W' || dial[i] == 'X' || dial[i] == 'Y' || dial[i] == 'Z'){
            cnt += 10;
        }
    }

    cout << cnt;
    return 0;
}