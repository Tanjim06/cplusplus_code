#include<iostream>
#include<vector>
using namespace std;
bool detectcycle(int node,int parent,vector<int>adj[],vector<bool>&visited){
    visited[node]=1;
    for(int i=0;i<adj[node].size();i++){
        int neighbour=adj[node][i];
        if(parent==neighbour) continue;
        if(visited[neighbour]==1) return 1;
        if(detectcycle(neighbour,node,adj,visited)) return 1;
    }
    return 0;
}
int main(){
    int vertex,edges;
    cin>>vertex>>edges;
    vector<int>adj[vertex];
    vector<bool>visited(vertex,0);
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool cycledetected=detectcycle(0,-1,adj,visited);
    if(cycledetected) cout<<"cycle detected";
    else cout<<"no cycle detected";

    return 0;
}