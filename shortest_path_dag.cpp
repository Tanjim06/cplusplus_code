#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
#define vertex 8
#define edges 8
using namespace std;
vector<int>shortestpath(int source,vector<pair<int,int>>adj[]){
int visited[vertex]={0};
vector<int>dist(vertex,0);
stack<pair<int,int>>st;
visited[source]=1;
st.push({source,0});
while(!st.empty()){
    int node=st.top().first;
    int cost=st.top().second;
    st.pop();
    for(int i=0;i<adj[node].size();i++){
        int next=adj[node][i].first;
        int weight=adj[node][i].second;
        if(!visited[next] || dist[node]+weight<dist[next]){
        visited[adj[node][i].first]=1;
        dist[next]=dist[node]+weight;
         st.push({next,dist[next]});
        }
    }
}
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
