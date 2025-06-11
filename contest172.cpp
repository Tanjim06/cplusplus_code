#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int c=0;
for(int i=0;i<n;i++){
    string str;
    cin>>str;
    if(str[0]=='T') c+=4;
    else if(str[0]=='C') c+=6;
    else if(str[0]=='O') c+=8;
    else if(str[0]=='D') c+=12;
    else c+=20;
}
cout<<c<<endl;
return 0;
}
