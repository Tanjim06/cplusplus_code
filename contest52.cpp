#include<iostream>
#include<cstring>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int i=0;
while(i<s.size()-1){
    if(s[i]==s[i+1]){
        s.erase(i+1,1);
    }
    else{
        i++;
    }
}
cout<<s.size()<<endl;
}
return 0;
}
