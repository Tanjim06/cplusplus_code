#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int count=0;
        int i=0,j=n-1;
        while(i<=j){
            if(arr[j]>=k) {
                count++;
                j--;
            }
            else if(i<j && arr[i]+arr[j]>=k){
                count++;
                i++;
                j--;
            }
            else i++;
        }
        cout<<count<<endl;
    }
    return 0;
}