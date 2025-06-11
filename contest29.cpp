#include<iostream>
using namespace std;
int main(){
int n,c=0;
cin>>n;
int arr[]={100,20,10,5,1};
for(int i=0;i<5;i++){
    c+=n/arr[i];
    n=n%arr[i];
}
cout<<c<<endl;
return 0;
}
