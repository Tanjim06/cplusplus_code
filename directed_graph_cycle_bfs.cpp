#include<iostream>
#include<vector>
#include<queue>
#define vertex 9
#define edges 9
using namespace std;
bool detectcycle(int node,vector<int>arr[],vector<bool>&visited){
    vector<int>InDeg(vertex,0);
    for(int i=0;i<vertex;i++){
        for(int j=0;j<arr[i].size();j++){
            InDeg[arr[i][j]]++;
        }
    }
    queue<int>q;
    int c=0;
    for(int i=0;i<vertex;i++){
        if(InDeg[i]==0){
            q.push(i);
        }
    }
    vector<int>ans;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        c++;
        for(int i=0;i<arr[node].size();i++){
            InDeg[arr[node][i]]--;
            if( InDeg[arr[node][i]]==0){
                q.push(arr[node][i]);
            }
        }
    }
    return c!=vertex;
}
int main(){
vector<int>arr[vertex];
for(int i=0;i<edges;i++){
    int u,v;
    cin>>u>>v;
    arr[u].push_back(v);
}
vector<bool>visited(vertex,0);
for(int i=0;i<vertex;i++){
        cout<<i<<" : ";
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
    }
cout<<"\n";
}
for(int i=0;i<vertex;i++){
    if(!visited[i] && detectcycle(0,arr,visited)){
        cout<<"cycle detected\n";
        return 0;
    }
}
cout<<"no cycle detected\n";
return 0;
}

