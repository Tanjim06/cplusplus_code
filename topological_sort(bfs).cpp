#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void dfs(int source,vector<int>adjlist[],vector<bool>&visited,stack<int>&st){
    visited[source]=1;
    for(int i=0;i<adjlist[source].size();i++){
        if(!visited[adjlist[source][i]]){
            dfs(adjlist[source][i],adjlist,visited,st);
        }
    }
    st.push(source);
}
void topologicalsort(vector<int> adjlist[],int vertex){
    vector<bool> visited(vertex,0);
    stack<int>st;
    for(int i=0;i<vertex;i++){
        if(!visited[i]) dfs(i,adjlist,visited,st);
    }
    vector<int>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
int vertex=6,edges=5;
vector<int>adjlist[vertex];
for(int i=0;i<edges;i++){
    int u,v;
    cin>>u>>v;
    adjlist[u].push_back(v);
}
topologicalsort(adjlist,vertex);
return 0;
}
