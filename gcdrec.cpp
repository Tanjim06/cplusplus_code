#include<iostream>
using namespace std;
int func(int m,int n){
if(n==0) return m;
return func(n,m%n);
}
int main(){
int m,n;
cin>>m>>n;
cout<<func(m,n);

return 0;
}
