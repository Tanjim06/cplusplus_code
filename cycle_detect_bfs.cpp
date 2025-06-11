#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool bfsdetect(vector<int>adj[],vector<bool>&visited){
    queue<pair<int,int> >q;
    visited[0]=1;
    q.push(make_pair(0,-1));
    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(int i=0;i<adj[node].size();i++){
            if(parent==node) continue;
            if(visited[adj[node][i]]) return 1;
            visited[adj[node][i]]=1;
            q.push(make_pair(adj[node][i],node));
        }
    }
    return 0;   
}
int main(){
    int vertex,edges;
    cin>>vertex>>edges;
    vector<int>adj[vertex];
    vector<bool>visited(vertex,0);
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<bfsdetect(adj,visited);


    return 0;
}