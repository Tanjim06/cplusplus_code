#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
string str;
cin>>str;
int cnt=0;
for(int i=1;i<=n;i++){
    if(str[i]==str[i-1]) cnt++;
}
cout<<cnt<<endl;
return 0;
}
