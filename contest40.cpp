#include<iostream>
#include<vector>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int oddParity = arr[0] % 2;
int evenParity = arr[1] % 2;
bool isValid = true;
for (int i = 0; i < n; i += 2) {
if (arr[i] % 2 != oddParity) {
    isValid = false;
        break;
    }
}
if (isValid) {
    for (int i = 1; i < n; i += 2) {
        if (arr[i] % 2 != evenParity) {
            isValid = false;
                break;
        }
    }
}
if (isValid) {
    cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
return 0;
}


