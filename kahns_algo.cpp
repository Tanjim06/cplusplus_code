#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>topsort(int v,vector<int>adj[]){
    vector<int>ans;
    vector<int>indegree(v,0);
    //finding the indegree 
    for(int i=0;i<v;i++){
        for(int j=0;j<adj[i].size();j++){
            indegree[adj[i][j]]++;
        }
    }
    queue<int>q;
    //inserting the elements in the queue which have no indegree
    for(int i=0;i<v;i++){
        if(!indegree[i]){
            q.push(i);
        }
    }
    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(int i=0;i<adj[node].size();i++){
            indegree[adj[node][i]]--;
            if(indegree[adj[node][i]]==0){
                q.push(adj[node][i]);
            }
        }
    }
    return ans;
}
int main(){
    int vertex,edges;
    cin>>vertex>>edges;
    vector<int>adj[vertex];
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adj[u].push_back(v);
    }
    vector<int>ans=topsort(vertex,adj);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}