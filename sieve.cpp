#include<iostream>
#include<vector>
using namespace std;
vector<bool>sieve(int n){
    vector<bool>primes(n+1,true);
    primes[0]=primes[1]=false;
    for(int i=2;i*i<=n;i++){
        if(primes[i]==true){
            for(int j=i*2;j<=n;j+=i){
                primes[j]=false;
            }
        }
    }
    return primes;
}
int main(){
    int n;
    cin>>n;
    vector<bool>ans=sieve(n);
    for(int i=0;i<ans.size();i++){
        if(ans[i]){
            cout<<i<<" is prime number"<<endl;
        }
        else{
            cout<<i<<" is not a prime number"<<endl;
        }  
    }
    return 0;
}