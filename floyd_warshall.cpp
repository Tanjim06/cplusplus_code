#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#define vertex 4
#define edges 7
using namespace std;
void shortest_distance(vector<vector<int>>&adj){
int n=adj.size();
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
if(adj[i][j]==-1) adj[i][j]=INT_MAX;

for(int k=0;k<n;k++)
for(int i=0;i<n;i++)
for(int j=0;j<n;j++){
    if(adj[i][k]==INT_MAX || adj[k][j]==INT_MAX) continue;
    adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
}
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
if(adj[i][j]==INT_MAX) adj[i][j]=-1;
}
int main(){
vector<vector<int>>adj(vertex,vector<int>(vertex,-1));
for(int i=0;i<vertex;i++){
    adj[i][i]=0;
}
for(int i=0;i<edges;i++){
    int u,v,w;
    cin>>u>>v>>w;
    adj[u][v]=w;
}
shortest_distance(adj);
for(int i=0;i<vertex;i++){
    for(int j=0;j<vertex;j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<"\n";
}

return 0;
}
