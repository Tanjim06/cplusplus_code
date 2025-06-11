#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void dfs(int node,vector<int>adjlist[],vector<bool>&visited,vector<int>&ans){
    stack<int> st;
    st.push(node);
    visited[node]=1;
    while(!st.empty()){
        int curr=st.top();
        st.pop();
        ans.push_back(curr);
        for(int i=adjlist[curr].size()-1;i>=0;i--){
            int neighbour=adjlist[curr][i];
            if(!visited[neighbour]){
                st.push(neighbour);
                visited[neighbour]=1;
            }
        }
    }
}
int main(){
int vertex,edges;
cin>>vertex>>edges;
vector<int>adjlist[vertex];
stack<int>st;
vector<bool>visited(vertex,0);
vector<int>ans;
int u,v;
for(int i=0;i<edges;i++){
    cin>>u>>v;
    adjlist[u].push_back(v);
    adjlist[v].push_back(u);
}
dfs(0,adjlist,visited,ans);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}
