#include<iostream>
#include<cmath>
using namespace std;
const long long MOD = 1e9 + 7;
long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
int main(){
int t;

cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    cout<<power(n,k,MOD)<<endl;
}
return 0;
}
