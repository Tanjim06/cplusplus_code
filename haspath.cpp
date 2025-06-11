#include<stdio.h>
#include<stdbool.h>
#define vertex 5
#define edges 5
bool haspath(int adj[][vertex],int src,int dst){
if(src==dst) return true;
for(int i=0;i<vertex;i++){
    if(adj[src][i]==1) return haspath(adj,i,dst);
}
return false;
}
int main(){
int adj[vertex][vertex]={0};
for(int i=0;i<edges;i++){
    int u,v;
    scanf("%d %d",&u,&v);
    adj[u][v]=1;
}
printf("%d",haspath(adj,0,4));
return 0;
}
