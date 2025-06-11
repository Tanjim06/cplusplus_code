#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long x,y,a;
cin>>x>>y>>a;
long long low =1,high =1e18,ans =-1;
double target = a + 0.5;
 while (low <= high) {
    long long mid = (low + high) / 2;
    long long days_b = (mid + 1) / 2;
    long long days_k = mid / 2;
    double total_dug = 1.0 * days_b * x + 1.0 * days_k * y;
    if (total_dug >= target) {
        ans = mid;
        high = mid - 1;
    } else {
        low = mid + 1;
    }
}
if(ans%2==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}

return 0;
}
