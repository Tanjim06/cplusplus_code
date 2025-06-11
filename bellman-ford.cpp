#include<iostream>
#include<vector>
#include<climits>
#define vertex 5
using namespace std;
vector<int>bford(int source,vector<vector<int>>&edges){
vector<int>dist(vertex,INT_MAX);
dist[source]=0;
int e=edges.size();
for(int i=0;i<vertex-1;i++){
    for(int j=0;j<e;j++){
        int u=edges[j][0];
        int v=edges[j][1];
        int weight=edges[j][2];
        if(dist[u] != INT_MAX&&dist[u]+weight<dist[v]){
            dist[v]=dist[u]+weight;
        }
    }
}
for(int j=0;j<e;j++){
        int u=edges[j][0];
        int v=edges[j][1];
        int weight=edges[j][2];
        if(dist[u] != INT_MAX&&dist[u]+weight<dist[v]){
            vector<int>ans;
            ans.push_back(-1);
            return ans;
        }
}
return dist;
}
int main(){
    vector<vector<int>> edges;
    edges.push_back({0, 1, 3});
    edges.push_back({0, 2, 5});
    edges.push_back({1, 3, 1});
    edges.push_back({2, 4, 2});
    edges.push_back({2, 3, -3});
    edges.push_back({3, 4, -2});
    vector<int>ans;
    ans=bford(0,edges);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
return 0;
}
