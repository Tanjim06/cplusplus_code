#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
string x;
cin>>x;
string ans="";
for(int i=0;i<x.length();i++){
    char ch=x[i];
    int digit=ch-'0';
    int inv=9-digit;
    ans+=(min(digit,inv)+'0');
}
if(ans[0]=='0'){
    ans[0]='9';
}
cout<<ans;
return 0;
}
