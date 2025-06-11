#include<iostream>
#include<vector>
#define vertex 5
#define edges 5
using namespace std;
bool bipartite(int node,vector<int>arr[],vector<int>&color){
for(int i=0;i<arr[node].size();i++){
    if(color[arr[node][i]]==-1){
        color[arr[node][i]]=(color[node]+1)%2;
        if(!bipartite(arr[node][i],arr,color)) return 0;
    }
    else{
        if(color[node]==color[arr[node][i]]) return 0;
    }
}
return 1;
}
int main(){
vector<int>arr[vertex];
for(int i=0;i<edges;i++){
    int u,v;
    cin>>u>>v;
    arr[u].push_back(v);
    arr[v].push_back(u);
}
vector<int>color(vertex,-1);
for(int i=0;i<vertex;i++){
        cout<<i<<" : ";
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
for(int i=0;i<vertex;i++){
    if(color[i]==-1){
        if(!bipartite(i,arr,color)){
            cout<<"not bipartite graph\n";
            return 0;
        }
    }
}
cout<<"bipartite graph\n";
return 0;
}

