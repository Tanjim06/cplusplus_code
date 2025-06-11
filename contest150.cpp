#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maxval=*max_element(arr.begin(),arr.end());
int minval=*min_element(arr.begin(),arr.end());
int maxidx=-1;
for(int i=0;i<n;i++){
    if(arr[i]==maxval){
        maxidx=i;
        break;
    }
}
int minidx=-1;
for(int i=n-1;i>=0;i--){
    if(arr[i]==minval){
        minidx=i;
        break;
    }
}
int moves=maxidx+(n-1-minidx);
if(minidx<maxidx){
    moves--;
}
cout<<moves<<endl;
return 0;
}
