#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

int main(void){
    int a,b,c, d;
    int result[10] = {0,};
    cin >> a >> b >> c;
    d = a * b * c;
    string resultstr = to_string(d);
    for(int i = 0; i < resultstr.length(); i++){
        int a = resultstr[i] - 48;
        result[a]++;
    }
    for(int i = 0; i<10; i++){
        cout << result[i] << "\n";
    }
    return 0;
}