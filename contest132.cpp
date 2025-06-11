#include<iostream>
#include<cstring>
using namespace std;
bool isprime(unsigned long long n){
if(n<2) return false;
if(n==2 || n==3) return true;
if(n%2==0) return false;
for(unsigned long long i=2;i*i<=n;i++){
    if(n%i==0){
        return false;
    }
}
return true;
}
int str2int(string str){
int r=0;
for(char c:str){
    r=r*10+(c-'0');
}
return r;
}
int main(){
int t;
cin>>t;
while(t--){
    int x,k;
    cin>>x>>k;
    string s;
    for(int i=0;i<k;i++){
        s+=to_string(x);
    }
    unsigned long long num=str2int(s);
    if(isprime(num)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

return 0;
}
