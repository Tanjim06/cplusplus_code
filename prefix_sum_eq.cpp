#include<iostream>
#include<vector>
using namespace std;
int equilibrium(vector<int>&arr){
    int n=arr.size();
    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    int left_sum=0;
    for(int i=0;i<n;i++){
        int right_sum=total_sum-arr[i]-left_sum;
        if(left_sum==right_sum){
            return i;
        }
        left_sum+=arr[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<equilibrium(arr);
    return 0;
}