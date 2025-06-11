#include<iostream>
#include<queue>
#include<vector>
using namespace std;
bool valid(int i,int j,int n){
return i>=0&&j>=0&&i<n&&j<n;
}
int row[8]={2,2,-2,-2,1,-1,1,-1};
int col[8]={1,-1,1,-1,2,2,-2,-2};
int minsteap(vector<int>&pos,vector<int>&target,int n){
if(target[0]==pos[0]&&target[1]==pos[1]) return 0;
queue<pair<int,int>>q;
vector<vector<bool>>chess(n,vector<bool>(n,0));
q.push({pos[0],pos[1]});
chess[pos[0]][pos[1]]=1;
int step=0;
while(!q.empty()){
    int c=q.size();
    while(c--){
        int i=q.front().first;
        int j=q.front().second;
        q.pop();
        for(int k=0;k<8;k++){
            int new_i=i+row[k];
            int new_j=j+col[k];
            if(valid(new_i,new_j,n)&&!chess[new_i][new_j]){
                if(new_i==target[0]&&new_j==target[1]) return step+1;
                chess[new_i][new_j]=1;
                q.push({new_i,new_j});
            }
        }
    }
    step++;
}
return -1;
}
int main(){
vector<int>pos={1,4};
vector<int>dest={7,1};
cout<<minsteap(pos,dest,8);

return 0;
}
