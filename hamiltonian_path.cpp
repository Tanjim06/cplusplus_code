#include<iostream>
#include<vector>
#define vertex 5
#define edges 7
using namespace std;
bool DFS(int node,vector<vector<int>>&adj,vector<bool>&visited,int &c){
visited[node]=1;
c++;
if(c==vertex) return 1;
for(int i=0;i<adj[i].size();i++){
    if(!visited[adj[node][i]] && DFS(adj[node][i],adj,visited,c)) return 1;
}
visited[node]=0;
c--;
return 0;
}
bool check(vector<vector<int>>edge){
vector<vector<int>>adj(vertex);
for(int i=0;i<edges;i++){
    adj[edge[i][0]].push_back(edge[i][1]);
    adj[edge[i][1]].push_back(edge[i][0]);
}
vector<bool>visited(vertex,0);
int c=0;
for(int i=0;i<vertex;i++){
if(DFS(i,adj,visited,c)) return 1;
}
return 0;
}
int main(){
vector<vector<int>>edge={{0,1},{1,2},{0,4},{1,4},{1,3},{2,3},{3,4}};
cout<<check(edge)<<endl;
return 0;
}
