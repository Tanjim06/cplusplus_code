#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#define vertex 7
#define edges 7
using namespace std;
void DFS(int node,vector<int>adj[],vector<bool>&visited,vector<int>&disc,vector<int>&low,stack<int>&st,vector<bool>&instack,vector<vector<int>>&ans,int &timer){
visited[node]=1;
disc[node]=low[node]=timer;
st.push(node);
instack[node]=1;
for(int i=0;i<adj[node].size();i++){
    int neib=adj[node][i];
    if(!visited[neib]){
        timer++;
        DFS(neib,adj,visited,disc,low,st,instack,ans,timer);
        low[node]=min(low[node],low[neib]);
    }
    else{
        if(instack[neib])
        low[node]=min(low[node],disc[neib]);
    }}
if(disc[node]==low[node]){
    vector<int>temp;
    while(!st.empty()&&st.top()!=node){
        temp.push_back(st.top());
        instack[st.top()]=0;
        st.pop();
    }
    temp.push_back(node);
    instack[node]=0;
    st.pop();
    sort(temp.begin(),temp.end());
    ans.push_back(temp);
}}
vector<vector<int>>tarjans(vector<int>adj[]){
vector<vector<int>>ans;
vector<int>disc(vertex);
vector<int>low(vertex);
vector<bool>visited(vertex,0);
vector<bool>instack(vertex,0);
stack<int>st;
int timer=0;
for(int i=0;i<vertex;i++){
if(!visited[i]) DFS(i,adj,visited,disc,low,st,instack,ans,timer);
}
return ans;
}
int main(){
vector<int>adj[]={{0,1},{1,2},{2,3},{3,4},{4,5},{5,6},{6,3}};
vector<vector<int>>ans;
ans=tarjans(adj);
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
