#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 10
int arr[MAX];
int main(void){
    int a;
    cin >> a;
    for(int i = 0; i<a; i++){
        int x,y;
        cin >> x >> y;
        arr[i] = x+y;
    }
    for(int i = 0; i<a; i++){
        cout << arr[i] << "\n";
    }

    return 0;
}