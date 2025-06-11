#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
string str;
cin>>str;
string res="";
int sum=0;
int n=str.size();
for(int i=0;i<n;i++){
    if(str[i]!='0'){
        sum+=(pow(2,n-i-1));
    }
}
res=to_string(sum);
cout<<res;
return 0;
}
