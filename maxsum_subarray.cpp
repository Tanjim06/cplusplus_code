#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    maxsum=sum;
    int i=0,j=k;
    while(j<n){
        sum=sum+arr[j]-arr[i];
        i++;
        j++;
        maxsum=max(sum,maxsum);
    }
    cout<<maxsum;
    return 0;
}