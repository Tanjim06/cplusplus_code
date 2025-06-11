#include<iostream>
#include<vector>
#define edges 6
using namespace std;
void DFS(int node,int parent,vector<vector<int>>&adj,vector<int>&disc,vector<int>&low,vector<bool>&visited,vector<vector<int>>&bridges,int c){
disc[node]=low[node]=c;
visited[node]=1;
for(int i=0;i<adj[node].size();i++){
    int neighbour=adj[node][i];
    if(neighbour==parent) continue;
    else if(visited[neighbour]) low[node]=min(low[node],low[neighbour]);
    else{
        c++;
        DFS(neighbour,node,adj,disc,low,visited,bridges,c);
        if(low[neighbour]>disc[node]){
            vector<int>temp;
            temp.push_back(node);
            temp.push_back(neighbour);
            bridges.push_back(temp);
        }
        low[node]=min(low[node],low[neighbour]);
    }
}
}
vector<vector<int>>bridge(vector<vector<int>>&connections){
vector<vector<int>>adj(edges);
for(int i=0;i<connections.size();i++){
    int u=connections[i][0];
    int v=connections[i][1];
    adj[u].push_back(v);
    adj[v].push_back(u);
}
vector<vector<int>>bridges;
vector<int>disc(edges);
vector<bool>visited(edges);
vector<int>low(edges);
int c=0;
DFS(0,-1,adj,disc,low,visited,bridges,c);
return bridges;
}
int main(){
vector<vector<int>>connections={{0,1},{1,2},{2,5},{2,3},{3,4},{4,5}};
vector<vector<int>>ans;
ans=bridge(connections);
for(const auto& bridge:ans){
    cout<<bridge[0]<<"->"<<bridge[1]<<endl;
}
return 0;
}
