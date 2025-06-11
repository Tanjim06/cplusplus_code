#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#define vertex 10
#define edges 11
using namespace std;
vector<int>shortestpath(int source,vector<int>adj[],int destination){
int visited[vertex]={0};
vector<int>parent(vertex,-1);
queue<int>q;
q.push(source);
visited[source]=1;
while(!q.empty()){
    int node=q.front();
    q.pop();
    for(int i=0;i<adj[node].size();i++){
        if(!visited[adj[node][i]]){
            visited[adj[node][i]]=1;
            parent[adj[node][i]]=node;
            q.push(adj[node][i]);
        }
    }
}
vector<int>path;
while(destination!=-1){
    path.push_back(destination);
    destination=parent[destination];
}
reverse(path.begin(),path.end());
return path;
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
ans=shortestpath(0,adj,8);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}

