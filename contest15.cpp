#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string str;
cin>>str;
if(n!=5){
    cout<<"No"<<endl;
}
else{
    string corstring = "Timur";
    sort(str.begin(),str.end());
    sort(corstring.begin(),corstring.end());
    if(str==corstring){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}}
return 0;
}
