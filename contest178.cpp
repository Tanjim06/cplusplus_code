#include<iostream>
#include<vector>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
   int common;
        if(arr[0] == arr[1]) {
            common = arr[0];
        } else if(arr[0] == arr[2]) {
            common = arr[0];
        } else {
            cout << 1 << endl;
            continue;
        }
    for(int i = 0; i < n; i++){
        if(arr[i] != common){
            cout << i + 1 << endl;
            break;
        }
    }
}

return 0;
}
