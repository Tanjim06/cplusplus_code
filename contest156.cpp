#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int x=(k*l)/nl;
int y=c*d;
int z=p/np;
int m=min(x,min(y,z));
cout<<m/n<<endl;
return 0;
}
