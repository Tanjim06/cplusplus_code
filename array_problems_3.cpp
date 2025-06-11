//Q.1 Given an integer array return the prefix sum/running sum in the same array without creating another array.
/*
#include<iostream>
#include<vector>
using namespace std;
int n;
void preSum(vector<int> &arr){
for(int i=1;i<n;i++){
arr[i]=arr[i-1]+arr[i];
}}
int main(){

cout<<"enter the size of the array: ";
cin>>n;

vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
preSum(arr);
for(int i=0;i<n;i++){
cout<<arr[i]<<endl;
}
return 0;
}
*/
/*Q.2 Check if we can partition the array into two subarrays with equal sum.More formally check that the prefix sum of
part of the array is equal to the suffix sum of rest of the array.*/
/*
#include<iostream>
#include<vector>
using namespace std;
int n;
bool sufPrefSum(vector<int> &arr){
int total_sum=0;
int prefix_sum=0;
int suffix_sum=0;
for(int i=0;i<n;i++){
total_sum=total_sum+arr[i];
}
for(int i=0;i<n-1;i++){
prefix_sum+=arr[i];
suffix_sum=total_sum-prefix_sum;
if(suffix_sum==prefix_sum){
return true;
}}
return false;
}
int main(){
cout<<"enter the size of the array : ";
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<sufPrefSum(arr)<<endl;
for(int i=0;i<n;i++){
cout<<arr[i];
}
return 0;
}
/*
/*Q.3 Given an array of integers of size n.Answer q queries where you need to print the sum of values in a given range of
indices from l to r(both included) l and r follows 1-based indexing*/
#include<iostream>
#include<vector>
using namespace std;
int n;
int main(){
cout<<"enter the size of array : ";
cin>>n;
vector<int> arr(n+1,0);
for(int i=1;i<=n;i++){
cin>>arr[i];
}
for(int i=1;i<=n;i++){
arr[i]=arr[i-1]+arr[i];
}

int q;
cout<<"enter queries : ";
cin>>q;
int ans=0;
while(q--){
int l,r;
cin>>l>>r;
ans = arr[r]-arr[l-1];
cout<<ans<<endl;
}
return 0;
}
