#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int arr[27], n; cin >> n;
    
    for(int i = 0; i<n; i++){
        int flag = 0;
        fill(arr,arr+26, 0);
        string str, str1; cin >> str >> str1;
        
        for(int k = 0; k < str.length(); k++){
            arr[str[k] - 'a']++;
        }

        for(int k = 0; k<str1.length(); k++){
            arr[str1[k] - 'a']--;
        }
        
        for(int k = 0; k<26; k++){
            if(arr[k]){
                cout << "Impossible\n";
                flag = 1;
                break;
            }
        }
        
        if(flag == 0) cout << "Possible\n";
    }
    return 0;
}