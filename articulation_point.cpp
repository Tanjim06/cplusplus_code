#include<iostream>
#include<vector>
#include<algorithm>
#define vertex 11
#define edges 13
using namespace std;
void DFS(int node,int parent,vector<int>adj[],vector<bool>&visited,vector<int>&disc,vector<int>&low,vector<bool>&articulation,int &timer){
visited[node]=1;
disc[node]=low[node]=timer;
int child=0;
for(int i=0;i<adj[node].size();i++){
    int neib=adj[node][i];
    if(neib==parent) continue;
    else if(visited[neib]){
        low[node]=min(low[node],disc[neib]);
    }
    else{
        child++;
        timer++;
        DFS(neib,node,adj,visited,disc,low,articulation,timer);
        if(disc[node]<=low[neib]&&parent!=-1){
            articulation[node]=1;
        }
        low[node]=min(low[node],low[neib]);
    }
}
if(child>1&&parent!=-1){
    articulation[node]=1;
}
}
vector<int>articulation(vector<int>adj[]){
vector<bool>articulation(vertex,0);
vector<int>disc(vertex);
vector<int>low(vertex);
vector<bool>visited(vertex,0);
int timer=0;
DFS(0,-1,adj,visited,disc,low,articulation,timer);
vector<int>ans;
for(int i=0;i<vertex;i++){
    if(articulation[i]){
        ans.push_back(i);
    }
}
if(ans.size()==0) ans.push_back(-1);
return ans;
}
int main(){
vector<int>adj[vertex];
for(int i=0;i<edges;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
vector<int>ans;
ans=articulation(adj);
for(int i=0;i<ans.size();i++){
    cout<<ans[i];
}
return 0;
}
