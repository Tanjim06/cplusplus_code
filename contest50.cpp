#include<iostream>
using namespace std;
int main(){
string str;
cin>>str;
for(int i=0;i<str.length();i++){
    int x=str[i]-'0';
    if(i==0&&x==9) continue;
    if(9-x<x){
        str[i]=9-x+'0';
    }
}
cout<<str;
return 0;
}
