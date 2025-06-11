#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int row[4]={1,-1,0,0};
int col[4]={0,0,1,-1};
bool valid(int i,int j,int n,int m){
return i>=0&&j>=0&&i<n&&j<m;
}
int shortestPath(int r,int c,vector<vector<int>>a,int x,int y){
if(x==0 && y==0) return 0;
if(!a[0][0]) return -1;
queue<pair<int,int>>q;
q.push({0,0});
int step=0;
a[0][0]=0;
while(!q.empty()){
    int c=q.size();
    while(c--){
        int i=q.front().first;
        int j=q.front().second.first;
        int step=q.front().second.second;
        q.pop();
        for(int k=0;k<4;k++){
            int new_i=i+row[k];
            int new_j=j+col[k];
            if(valid(new_i,new_j,r,c)&&a[new_i][new_j]){
                if(new_i==x && new_j==y) return step+1;
                a[new_i][new_j]=0;
                q.push({new_i, new_j});
            }
        }
    }
}
return -1;
}
int main(){
vector<vector<int>>a={{1,1,1,0},
                                                   {1,0,1,0},
                                                   {1,0,1,1},
                                                   {1,0,0,1},
                                                   {1,1,1,1}};

cout<<shortestPath(5,4,a,4,2);
return 0;
}
