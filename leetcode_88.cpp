#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> merge(vector<int>&nums1,vector<int>&nums2){
    int m=nums1.size();
    int n=nums2.size();
    vector<int> arr(m+n);
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(nums1[i]<=nums2[j]){
            arr[k]=nums1[i];
            i++;
            k++;
        }
        else{
            arr[k]=nums2[j];
            j++;
            k++;
        }
    }
    while(i<m){
        arr[k]=nums1[i];
        i++;
        k++;
    }
    while(j<n){
        arr[k]=nums2[j];
        j++;
        k++;
    }
    return arr;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<int> nums1(m);
    vector<int> nums2(n);
    for(int i=0;i<m;i++){
        cin>>nums1[i];
    }
    for(int i=0;i<n;i++){
        cin>>nums2[i];
    }
    vector<int>arr=merge(nums1,nums2);
    for(int i=0;i<m+n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}