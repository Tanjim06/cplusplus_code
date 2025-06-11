#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void DFS(int node,vector<int>adj[],vector<bool>&visited,stack<int>&st){
    visited[node]=1;
    for(int i=0;i<adj[node].size();i++){
        if(!visited[adj[node][i]]){
            DFS(adj[node][i],adj,visited,st);
        }
    }
    st.push(node);

}
vector<int>topsort(int v,vector<int>adj[]){
    vector<bool>visited(v,0);
    stack<int>st;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            DFS(i,adj,visited,st);
        }
    }
    vector<int>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
int main(){
    int vertex,edges;
    cin>>vertex>>edges;
    vector<int>adj[vertex];
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adj[u].push_back(v);
    }
    vector<int>ans=topsort(vertex,adj);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}