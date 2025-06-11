#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int c=0;
for(int a=0;a<=n;a++){
    int b=n-a*a;
    if(b>=0&&a+b*b==m){
        c++;
    }
}
cout<<c<<endl;
return 0;
}
