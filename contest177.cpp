#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++) cin>>arr[i];
sort(arr.begin(),arr.end());
int c=0;
for(int i=n-1;i>=0;i--){
    c+=arr[n-1]-arr[i];
}
cout<<c<<endl;
return 0;
}
