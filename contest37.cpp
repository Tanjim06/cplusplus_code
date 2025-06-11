#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,i;
cin>>n;
int a[n];
int s=0,oddcount=0,evencount=0;
for(i=0;i<n;i++){
    cin>>a[i];
    s+=a[i];
    if(a[i]%2==0){
        evencount++;
    }
    else{
        oddcount++;
    }
}
if(s%2!=0 || (oddcount>0 && evencount>0)){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
