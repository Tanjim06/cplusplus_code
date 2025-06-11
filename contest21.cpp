#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
int d[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int mx=INT_MIN;
for(int i=0;i<n;i++){
    if(mx<a[i]){
        mx=a[i];
    }
}
for(int i=0;i<n;i++){
    d[i]=mx-a[i];
}
int mx2=INT_MIN;
for(int i=0;i<n;i++){
    if(mx2<d[i]){
        mx2=d[i];
    }
}
cout<<mx2<<endl;
}
return 0;
}
