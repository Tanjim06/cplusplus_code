#include<iostream>
#include<vector>
#define vertex 5
#define edges  5
using namespace std;
void DFS(int node,vector<int>adj[],vector<bool>&visited){
    visited[node]=1;
    for(int i=0;i<adj[node].size();i++){
        if(!visited[adj[node][i]]){
            DFS(adj[node][i],adj,visited);
        }
    }
}
int eulercircuit(vector<int>adj[]){
vector<int>degree(vertex,0);
int odd_deg=0;
for(int i=0;i<vertex;i++){
    degree[i]=adj[i].size();
    if(degree[i]%2) odd_deg++;
}
if(odd_deg!=2&&odd_deg!=0) return 0;
vector<bool>visited(vertex,0);
for(int i=0;i<vertex;i++){
    if(degree[i]){
        DFS(i,adj,visited);
        break;
    }
}
for(int i=0;i<vertex;i++){
    if(degree[i]&&!visited[i]) return 0;
}
if(odd_deg==0) return 2;
else return 1;
}
int main(){
vector<int>adj[vertex];
for(int i=0;i<edges;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
cout<<eulercircuit(adj);
return 0;
}
