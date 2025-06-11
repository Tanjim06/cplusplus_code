#include<iostream>
#include<climits>
using namespace std;
int maxs(int arr[],int n,int k){
    int i=0,j=k-1;
    int sum=0;
    int maxsum=INT_MIN;
    for(int l=i;l<k;l++){
        sum+=arr[l];
    }
    maxsum=sum;
    while(j<n){
        sum-=arr[i];
        i++;
        j++;
        sum+=arr[j];
        maxsum=max(maxsum,sum);
    }
return maxsum;
}
int main(){
    int arr[]={3,1,2,7,6,2,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<maxs(arr,n,k);
    return 0;
}