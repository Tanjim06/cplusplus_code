#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
#include<climits>
#define vertex 8
#define edges 8
using namespace std;
void DFS(int node,vector<pair<int,int>>adj[],stack<int>&st,vector<int>&visited){
visited[node]=1;
for(int i=0;i<adj[node].size();i++){
    if(!visited[adj[node][i].first]){
        DFS(adj[node][i].first,adj,st,visited);
    }
}
st.push(node);
}
vector<int>shortestpath(int source,vector<pair<int,int>>adj[]){
stack<int>st;
vector<int>visited(vertex,0);
vector<int>dist(vertex,INT_MAX);
dist[source]=0;
DFS(0,adj,st,visited);
while(!st.empty()){
    int node=st.top();
    st.pop();
    for(int i=0;i<adj[node].size();i++){
        int neighbour=adj[node][i].first;
        int weight=adj[node][i].second;
        dist[neighbour]=min(dist[neighbour],weight+dist[node]);
    }
}
    for(int i=0;i<vertex;i++)
        if(dist[i]==INT_MAX) dist[i]=-1;
return dist;
}
int main(){
vector<pair<int,int>>adj[vertex];
for(int i=0;i<edges;i++){
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back(make_pair(v,w));
}
vector<int>ans;
ans=shortestpath(0,adj);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}

