#include<iostream>
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
    for(int i=0;i<n;i++) cin>>arr[i];
    int cnt=0,max_blank=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt++;
            max_blank=max(max_blank,cnt);
        }
        else cnt=0;
    }
cout<<max_blank<<endl;
}

return 0;
}
