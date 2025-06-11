#include<iostream>
#include<cstring>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
string str;
cin>>str;
vector<long long>arr(n);
for(int i=0;i<n;i++) cin>>arr[i];
const long long INF=1e18;
vector<long long>dp(5,INF);
dp[0]=0;
string target="hard";
for(int i=0;i<n;i++){
    char c=str[i];
    vector<long long>new_dp(5,INF);
    for(int j=0;j<5;j++){
        if(j<4 && str[i]==target[j]){
            new_dp[j]=min(new_dp[j],dp[j]+arr[i]);
            new_dp[j+1]=min(new_dp[j+1],dp[j]);
        }
        else{
            new_dp[j]=min(new_dp[j],dp[j]);
        }
    }
    dp=new_dp;
}
long long ans=*min_element(dp.begin(), dp.begin() + 4);
cout<<ans<<endl;
return 0;
}

