#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
string str="";
while(n!=0){
    int i=0;
    int r=n%2;
    n/=2;
    str+=(r+'0');
}
reverse(str.begin(),str.end());
cout<<str;
return 0;
}
