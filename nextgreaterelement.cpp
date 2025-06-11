#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){

vector<int> arr={8,6,4,7,4,9,10,8,12};
int n=arr.size();
vector<int>nge(n,-1);
/*
int ans[n]={-1};
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
            ans[i]=arr[j];
            break;
        }
    }
}
for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}
*/

//O(n) approach
stack<int>st;
for(int i=0;i<n;i++){
    if(st.empty()){
        st.push(i);
    }
    else{
        while(!st.empty() && arr[st.top()]<arr[i]){
            nge[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
}

for(int i=0;i<n;i++){
    cout<<nge[i]<<" ";
}
return 0;
}
