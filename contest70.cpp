#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int lowerbound(vector<int>&nums,int n,int target){
    int l=0;
    int r=n-1;
    int ans=n;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]>=target){
            ans=min(ans,mid);
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    while(q--){
        int x;
        cin>>x;
        int lb=lowerbound(arr,n,x);
        lb+=1;
        if(lb>n){
            cout<<"-1"<<endl;
        }
        else{
            cout<<lb<<endl;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}