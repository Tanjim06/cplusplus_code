#include<iostream>
#include<vector>
#define vertex 9
#define edges 9
using namespace std;
bool detectcycle(int node,vector<int>arr[],vector<bool>&path,vector<bool>&visited){
path[node]=1;
for(int i=0;i<arr[node].size();i++){
    if(path[arr[node][i]]==1) return 1;
    if(visited[arr[node][i]]) continue;
    if(detectcycle(arr[node][i],arr,path,visited)) return 1;
}
path[node]=0;
return 0;
}
int main(){
vector<int>arr[vertex];
for(int i=0;i<edges;i++){
    int u,v;
    cin>>u>>v;
    arr[u].push_back(v);
}
vector<bool>path(vertex,0);
vector<bool>visited(vertex,0);
for(int i=0;i<vertex;i++){
        cout<<i<<" : ";
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
    }
cout<<"\n";
}
for(int i=0;i<vertex;i++){
    if(!visited[i] && detectcycle(0,arr,path,visited)){
        cout<<"cycle detected\n";
        return 0;
    }
}
cout<<"no cycle detected\n";
return 0;
}
