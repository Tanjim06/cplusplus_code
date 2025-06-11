#include<iostream>
using namespace std;
int main(){
int n,m; //n for vertex and m for edges
cin>>n>>m;
int adjmatrix[n+1][m+1];
for(int i=0;i<m;i++){
int u,v;
cin>>u>>v;
adjmatrix[u][v]=1;
adjmatrix[v][u]=1;
}


return 0;

}
