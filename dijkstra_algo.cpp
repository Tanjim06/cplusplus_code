#include<iostream>
#include<vector>
#include<climits>
#define vertex 6
#define edges 8
using namespace std;
vector<int> dijkstra(int source,vector<int>adj[]){
vector<int>dist(vertex,INT_MAX);
int visited[vertex]={0};
dist[source]=0;
int c=vertex;
while(c--){
int node=-1,value=INT_MAX;
for(int i=0;i<vertex;i++){
    if(!visited[i] && value>dist[i]){
        node=i;
        value=dist[i];
    }
}
visited[node]=1;
for(int i=0;i<adj[node].size();i++){
    int neighbour=adj[node][i][0];
    int weight=adj[node][i][1];
    if(!visited[neighbour] && dist[node]+weight<dist[neighbour]){
        dist[neighbour]=dist[node]+weight;
    }
}
return dist;
}
}
int main(){
vector<vector<int>>adj[vertex];
adj[][]

return 0;
}
