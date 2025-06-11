#include<iostream>
#include<cstring>
using namespace std;
int main(){
string s,s1;
cin>>s;
for(int i=0;i<s.size();i++){
    for(int j=i+1;j<s.size();j++){
        string temp=s[i];
        s1[i]=s[j];
        s1[j]=temp;
    }
}
if()
return 0;
}
