#include<iostream>
#include<vector>
using namespace std;
void dfs(int node,vector<int>adjlist[],vector<bool>&visited,vector<int>&ans){
visited[node]=1;
ans.push_back(node);
for(int i=0;i<adjlist[node].size();i++){
    if(!visited[adjlist[node][i]]){
        dfs(adjlist[node][i],adjlist,visited,ans);
    }
}}
int main(){
int vertex,edges;
cin>>vertex>>edges;
vector<int>adjlist[vertex];
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
