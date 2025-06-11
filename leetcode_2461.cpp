#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=0,maxsum=INT_MIN,sum=0;
    while(r<n){
        sum+=arr[r];
        if(r-l+1>k){
            sum-=arr[l];
            l++;
        }
        bool distinct=true;
        for(int i=l;i<r;i++){
            if(arr[i]==arr[r]){
                distinct=false;
                break;
            }
        }
        if(r-l+1==k && distinct){
            maxsum=max(maxsum,sum);
        }
        r++;
    }
    cout<<(maxsum == INT_MIN ? 0 : maxsum);;
    return 0;
}