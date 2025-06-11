#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,x=0;
cin>>n;
for(int i=0;i<2;i++){
x+=n%10;
n/=10;
}
cout<<x<<endl;
}
return 0;
}
