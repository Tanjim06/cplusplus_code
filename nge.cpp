#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>nge(vector<int>&arr,int n){
vector<int>ans(n,-1);
stack<int>st;
st.push(0);
for(int i=1;i<n;i++){
    int e=st.top();
    while(!st.empty() && arr[i]>arr[st.top()]){
        ans[st.top()]=arr[i];
        st.pop();
    }
    st.push(i);
}
while(!st.empty()){
    ans[st.top()]=-1;
    st.pop();
}
return ans;
}
int main(){
vector<int>arr={4,6,3,1,0,9,5,6,7,3,2};
int n=arr.size();
vector<int>ans;
ans=nge(arr,n);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}




