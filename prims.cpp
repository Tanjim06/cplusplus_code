#include<iostream>
#include<queue>
#include<vector>
#define vertex 9
#define edges 13
using namespace std;
int spanningtree(vector<vector<int>>adj[]){
priority_queue<pair<int,pair<int,int>>,vector<int>,greater<int>>p;
vector<bool>ismst(vertex,0);
vector<int>parent(vertex);
int cost=0;
p.push({0},{0,-1});
while(!p.empty()){
    int wt=p.top().first;
    int node=p.top().second.first;
    int par=p.top().second.second;
    if(!ismst[node]){
        ismst[node]=1;
        cost+=wt;
        parent[node]=par;
        for(int i=0;i<adj[node].size();i++){
            if(ismst[adj[node][i][0]]){
                p.push({adj[node][i][1]],adj[node][i][0]],node});
            }
        }
    }
    return cost;
}
}
int main(){
vector<vector<int>> ad[] = {
    {{0, 1, 4}}, {{1, 0, 4}},
    {{0, 7, 8}}, {{7, 0, 8}},
    {{1, 7, 11}}, {{7, 1, 11}},
    {{1, 2, 8}}, {{2, 1, 8}},
    {{2, 3, 7}}, {{3, 2, 7}},
    {{2, 8, 2}}, {{8, 2, 2}},
    {{3, 4, 9}}, {{4, 3, 9}},
    {{3, 5, 14}}, {{5, 3, 14}},
    {{4, 5, 10}}, {{5, 4, 10}},
    {{5, 6, 2}}, {{6, 5, 2}},
    {{6, 7, 1}}, {{7, 6, 1}},
    {{6, 8, 6}}, {{8, 6, 6}},
    {{7, 8, 7}}, {{8, 7, 7}}
};

return 0;
}
