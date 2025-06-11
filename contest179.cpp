#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n,t;
cin>>n>>t;
vector<int>arr(n);
int bc=0,i=0;
for(int i=0;i<n;i++) cin>>arr[i];
int left=0,right=0,sum=0,max_book=0;
for(right=0;right<n;right++){
    sum+=arr[right];
    if(sum>t){
        sum-=arr[left];
        left++;
    }
    max_book=max(max_book,right-left+1);
}
cout<<max_book<<endl;
return 0;
}
