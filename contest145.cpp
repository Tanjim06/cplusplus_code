#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min_max=INT_MAX;
    for(int i=0;i<n-1;i++){
        int current_max=max(arr[i],arr[i+1]);
        min_max=min(min_max,current_max);
    }
    cout<<min_max-1<<endl;
}
return 0;
}
