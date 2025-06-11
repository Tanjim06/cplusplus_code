#include<iostream>
#include<vector>
#define vertex 8
#define edges 6
using namespace std;
bool detectCycle(int node,int parent,vector<int>arr[],vector<bool>&visited){
visited[node]=1;
for(int i=0;i<arr[node].size();i++){
    if(parent==arr[node][i]) continue;
    if(visited[arr[node][i]==1]) return 1;
    if(detectCycle(arr[node][i],node,arr,visited)) return 1;
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
    if(!visited[i] && detectCycle(i,-1,arr,visited)){
            cout<<"cycle detected\n";
            break;
    }
}
return 0;
}
