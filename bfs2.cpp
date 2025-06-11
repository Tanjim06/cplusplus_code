#include<iostream>
#include<queue>
#include<vector>
using namespace std;
vector<int>BFS(int v,vector<int>adj[]){
    queue<int>q;
    vector<bool>visited(v,0);
    q.push(0);
    visited[0]=1;
    vector<int>ans;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        ans.push_back(x);
        for(int i=0;i<adj[x].size();i++){
            if(!visited[adj[x][i]]){
                visited[adj[x][i]]=1;
                q.push(adj[x][i]);
            }
        }

    }
    return ans;
}
int main(){
    int v=5;
    vector<int>adj[v];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[2].push_back(0);
    adj[2].push_back(4);
    adj[3].push_back(1);
    adj[4].push_back(2);
    vector<int>result=BFS(v,adj);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }


    return 0;
}