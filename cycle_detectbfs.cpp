#include<iostream>
#include<vector>
#include<queue>
#define vertex 6
#define edges 6
using namespace std;
bool bfs(int s,vector<int>adj[],vector<bool>&visited){
queue<pair<int,int>>q;
visited[s]=1;
q.push(make_pair(0,-1));
while(!q.empty()){
    int node=q.front().first;
    int parent=q.front().second;
    q.pop();
    for(int i=0;i<adj[node].size();i++){
        if(parent==adj[node][i]) continue;
        if(visited[adj[node][i]]==1) return 1;
        visited[adj[node][i]]=1;
        q.push(make_pair(adj[node][i],node));

    }
}
return 0;
}
int main(){
vector<int>arr[vertex];
for(int i=0;i<edges;i++){
    int u,v;
    cin>>u>>v;
    arr[u].push_back(v);
    arr[v].push_back(u);
}
vector<bool>visited(vertex,0);
for(int i=0;i<vertex;i++){
        cout<<i<<" : ";
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
    }
cout<<endl;
}

for(int i=0;i<vertex;i++){
    if(!visited[i] ){
            if( bfs(i,arr,visited)){
                cout<<"cycle detected\n";
                return 0;
        }
    }
}
cout<<"no cycle present\n";
return 0;
}

