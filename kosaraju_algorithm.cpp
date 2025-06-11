#include<iostream>
#include<stack>
#include<vector>
#define vertex 12
#define edges 15
using namespace std;
void DFS(int node,vector<vector<int>>&adj,vector<bool>&visited){
visited[node]=1;
for(int i=0;i<adj[node].size();i++){
    if(!visited[adj[node][i]]) DFS(adj[node][i],adj,visited);
}
}
void topological(int node,vector<vector<int>>&adj,vector<bool>&visited,stack<int>&st){
visited[node]=1;
for(int i=0;i<adj[node].size();i++){
    if(!visited[adj[node][i]]) topological(adj[node][i],adj,visited,st);
}
st.push(node);
}
int kosaraju(vector<vector<int>>&adj){
stack<int>st;
vector<bool>visited(vertex,0);
for(int i=0;i<vertex;i++){
if(!visited[i])topological(i,adj,visited,st);
}
vector<vector<int>>adj2(vertex);
for(int i=0;i<vertex;i++){
    for(int j=0;j<adj[i].size();j++){
        int u=i;
        int v=adj[i][j];
        adj2[v].push_back(u);
    }
}
for(int i=0;i<vertex;i++){
    visited[i]=0;
}
int scc=0;
while(!st.empty()){
    int n=st.top();
    st.pop();
    if(!visited[n]){
        scc++;
        DFS(n,adj2,visited);
    }
}
return scc;
}
int main(){
vector<vector<int>>adj={{0,3},{3,2},{1,0},{2,1},{2,11},{11,10},{10,9},{9,11},{9,8},{8,4},
                                                    {4,6},{4,7},{6,7},{5,6},{4,5}};

cout<<kosaraju(adj)<<endl;
return 0;
}
