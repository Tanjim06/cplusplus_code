#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool check(vector<int>&nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=1;i<n;i++){
       if(nums[i]==nums[i-1]) return true;
    }
    return false;
}   
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<check(nums);
    return 0;
}