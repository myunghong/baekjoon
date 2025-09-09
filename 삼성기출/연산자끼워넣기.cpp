#include<algorithm>
#include<iostream>
using namespace std;
int nums[20];
int oper[4];

void foo(int a){
    if(nums[a+1] == 0){
        return;
    }
    
}
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a;
    int min = 1000000000, max= -1000000000;
    cin >> a;
    for(int i = 0; i<a; i++){
        cin >> nums[i];
    }
    
    
    for(int i = 0; i<4; i++){
        cin >> oper[i];
    }


    for(int i = 0; i<a; i++){
        int q = nums[i];
        int w = nums[i+1];
        if(w == 0) break;


        for(int j = 0, j<a-1; j++){

        }

    }
    return 0;
}
