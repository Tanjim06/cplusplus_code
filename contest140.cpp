#include<iostream>
using namespace std;
bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }
    return (n & (n - 1)) == 0;
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bool flag=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if(!isPowerOfTwo(i+1)){
                flag=0;
                break;
            }
        }
    }
      cout<<(flag?"YES":"NO")<<endl;
}
return 0;
}
