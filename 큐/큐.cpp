#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int arr[20000];
int front = 0, rear = 0;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,k; cin >> n;
    string str;
    for(int i = 0; i<n; i++){
        cin >> str;
        if(str == "push"){
            cin >> k;
            arr[rear++] = k;
        }
        else if(str =="pop"){
            if(rear == front) cout << "-1\n";
            else{
                cout << arr[front++] << '\n';
            }
        }
        else if(str == "size"){
            cout << rear - front << '\n';
        }
        else if(str == "empty"){
            if(rear == front) cout << "1\n";
            else cout << "0\n";
        }
        else if(str == "front"){
            if(rear == front) cout << "-1\n";
            else cout << arr[front] << '\n';
        }
        else if(str == "back"){
            if(rear == front) cout << "-1\n";
            else cout << arr[rear-1] << '\n';
        }
    }
    return 0;
}