#include<iostream>
#include<vector>
#include<queue>
#define vertex 9
#define edges 13
using namespace std;
int findparent(int u,vector<int>&parent){
if(u==parent[u]) return u;
return parent[u]=findparent(parent[u],parent);
}
void unionrank(int u,int v,vector<int>&parent,vector<int>&rnk){
int pu=findparent(u,parent);
int pv=findparent(v,parent);
if(rnk[pu]>rnk[pv]){
    parent[pv]=pu;
}
else if(rnk[pu]<rnk[pv]){
    parent[pu]=pv;
}
else{
    parent[pv]=pu;
    rnk[pu]++;
}
}
int spanningtree(vector<vector<int>>adj[]){
vector<int>parent(vertex);
vector<int>rnk(vertex,0);
for(int i=0;i<vertex;i++){
    parent[i]=i;
}
priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>p;
for(int i=0;i<vertex;i++){
    for(int j=0;j<adj[i].size();j++){
        int u = i;
        int v = adj[i][j][0];
        int weight = adj[i][j][2];
        if(u<v) p.push({weight,{u,v}});
    }
}
int cost=0;
int e=0;
while(!p.empty()){
    int weight=p.top().first;
    int u=p.top().second.first;
    int v=p.top().second.second;
    p.pop();
    if(findparent(u,parent)!=findparent(v,parent)){
        cost+=weight;
        unionrank(u,v,parent,rnk);
        e++;
    }
    if(e==vertex-1) break;
}
return cost;
}
int main(){
vector<vector<int>> adj[vertex] = {
        {{1, 0, 4}, {7, 0, 8}},
        {{0, 1, 4}, {2, 1, 11}, {7, 1, 8}},
        {{1, 2, 11}, {8, 2, 2}, {3, 2, 7}},
        {{2, 3, 7}, {5, 3, 14}, {4, 3, 9}},
        {{3, 4, 9}, {5, 4, 10}},
        {{6, 5, 2}, {3, 5, 14}, {4, 5, 10}},
        {{5, 6, 2}, {7, 6, 1}, {8, 6, 6}},
        {{0, 7, 8}, {1, 7, 8}, {6, 7, 1}, {8, 7, 7}},
        {{2, 8, 2}, {6, 8, 6}, {7, 8, 7}}
    };
cout<<spanningtree(adj);
return 0;
}
