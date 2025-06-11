#include<iostream>
#include<vector>
using namespace std;
int main(){
    int v,e;
    cin>>v>>e;
    vector<vector<int>>adjmatrix(v,vector<int>(v,0));
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adjmatrix[u][v]=1;
        adjmatrix[v][u]=1;   //remove this if directed
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<adjmatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}