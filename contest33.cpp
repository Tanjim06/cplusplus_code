#include<iostream>
#include<cstring>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int c=0;
string s="codeforces";
string str;
cin>>str;
if(s.size()==str.size()){
    for(int i=0;i<str.size();i++){
        if(str[i]!=s[i]){
            c++;
        }
    }
}
cout<<c<<endl;
}
return 0;
}
