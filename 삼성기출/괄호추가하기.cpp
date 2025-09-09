#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
char nums[25];
//수식의 길이가 19면 0+1+2+3+4+5+6+7+8+9 -> 숫자 10개, 연산자 9개. 첫번째거엔 괄호 씌우는 의미가 없으므로
//0+(1+2)+(3+4)+(5+6)+(7+8)+9 또는 0+1+(2+3)+(4+5)+(6+7)+(8+9) 괄호는 최대 4개까지만 들어감
int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    int flag;
    for(int i = 0; i<n ; i++){
        cin >> nums[i];
    }
    int result = nums[0];
    for(int i = 1; i<n; i++){
        if(i % 2 != 0){
            if(nums[i] == '+'){
                flag= 0;
            }
            else if(nums[i] == '-'){
                flag = 1;
            }
            else if(nums[i] == '*'){
                flag = 2;
            }
        }
        else{
            if(flag == 0){
                result = result + nums[i];
            }
            else if(flag == 1){
                result = result - nums[i];
            }
            else if(flag == 2){
                result = result * nums[i];
            }
        }
    }

    cout << result;
    return 0;
}