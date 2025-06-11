#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t,n,k;
cin>>t;
while(t--){
int s=0;
cin>>n>>k;
int a[n];
int b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}
sort(a,a+n);
sort(b,b+n,greater<int>());
int swaps=0,l=0,r=0;
while(swaps<k && l<n && r>=0){
    if(b[r]>a[l]){
    swap(a[l],b[r]);
    swaps++;
    l++;
    r++;
    }
    else{
        break;
    }
        }
for(int i=0;i<n;i++){
    s+=a[i];
}
cout<<s<<endl;
}
return 0;
}
