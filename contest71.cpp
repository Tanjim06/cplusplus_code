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
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    int m;
    cin>>m;
    while(m--){
        int q;
        cin>>q;
        int lb=lowerbound(arr,n,q)+1;
        cout<<lb<<endl;
    }
    return 0;
}