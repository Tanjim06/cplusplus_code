#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,op=0;
cin>>n;
int h[n];
for(int i=0;i<n;i++){
    cin>>h[i];
}
for(int i=0;i<n;i++){
    if(h[i]>h[i+1]){
        op++;
    }
}
cout<<op<<endl;
}
return 0;
}
