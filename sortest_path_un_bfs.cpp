#include<iostream>
#include<queue>
#include<vector>
#define vertex 9
#define edges 11
using namespace std;
vector<int>shortestpath(int source,vector<int>adj[]){
int visited[vertex]={0};
vector<int>dist(vertex,-1);
queue<int>q;
q.push(source);
dist[source]=0;
visited[source]=1;
while(!q.empty()){
    int node=q.front();
    q.pop();
    for(int i=0;i<adj[node].size();i++){
        if(!visited[adj[node][i]]){
            visited[adj[node][i]]=1;
            dist[adj[node][i]]=dist[node]+1;
            q.push(adj[node][i]);
        }
    }
}
return dist;
}
int main(){
vector<int>adj[ vertex];
for(int i=0;i<edges;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
vector<int>ans;
ans=shortestpath(0,adj);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}
