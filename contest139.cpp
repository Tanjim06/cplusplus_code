#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long sum=0;
    for(long long i=n;i>0;i/=2){
        sum+=i;
    }
    cout<<sum<<endl;
}

return 0;
}
