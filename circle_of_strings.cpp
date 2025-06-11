#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
void DFS(int node,vector<int>adj[],vector<bool>&visited){
visited[node]=1;
for(int i=0;i<adj[node].size();i++){
    if(!visited[adj[node][i]]){
        DFS(adj[node][i],adj,visited);
    }
}
}
int iscircle(int n,vector<string>a){
vector<int>adj[26];
vector<int>indegree(26,0);
vector<int>outdegree(26,0);
vector<bool>visited(26,0);
for(int i=0;i<n;i++){
    string temp=a[i];
    int u=temp[0]-'a';
    int v=temp[temp.size()-1]-'a';
    adj[u].push_back(v);
    outdegree[u]++;
    indegree[v]++;
}
for(int i=0;i<26;i++){
    if(indegree[i]!=outdegree[i]) return 0;
}
DFS(a[0][0]-'a',adj,visited);
for(int i=0;i<26;i++){
    if(indegree[i]&&!visited[i]) return 0;
}
return 1;
}
int main(){
int n;
vector<string>a(n);
a={"abad","dabc","cdea","akrt","tord","dcka"};
cout<<iscircle(6,a);
return 0;
}
