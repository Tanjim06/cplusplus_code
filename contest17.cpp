#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,s=0,c1=0,c2=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    s+=a[i];
    if(a[i]==1){
        c1++;
    }
    else{
        c2++;
    }
}
if(s%2!=0){
    cout<<"No"<<endl;
}
else{
    int half=s/2;
    if((half%2==0)||(half%2==1 && c1>0)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}}
return 0;
}
