#include<iostream>
#include<cstring>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string W;
cin>>W;
int pos=W.find("us");
if(W.size()>=2){
    W.replace(W.size()-2,2,"i");
}
cout<<W<<endl;
}
return 0;
}
