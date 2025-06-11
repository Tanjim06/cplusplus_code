#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string n,m;
    cin>>n>>m;
    int n1=stoi(n,nullptr,2);
    int n2=stoi(m,nullptr,2);
    int ans=n1+n2;
    string bin_sum="";
    while(ans>0){
        bin_sum=(char)(ans%2+'0')+bin_sum;
        ans/=2;
    }
    if(bin_sum.empty()){
        bin_sum="0";
    }
    cout<<bin_sum<<endl;
    return 0;
}