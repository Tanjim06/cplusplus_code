#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertex,edge;
    cin>>vertex>>edge;
    vector<int>adjlist[vertex];
    int u,v;
    for(int i=0;i<edge;i++){
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    for(int i=0;i<vertex;i++){
        cout<<i<<"->";
        for(int j=0;j<adjlist[i].size();j++){
            cout<<adjlist[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}