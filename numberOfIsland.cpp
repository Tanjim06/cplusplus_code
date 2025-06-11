#include<iostream>
#include<vector>
#include<queue>
int row;
int col;
using namespace std;
bool valid(int i,int j){
    return i>=0 && i<row && j>=0 && j<col;
}
int islandcount(vector<vector<int>>arr){
row=arr.size();
col=arr[0].size();
int cnt=0;
int r[8]={-1,-1,-1,1,1,1,0,0};
int c[8]={-1,0,1,-1,0,1,-1,1};
queue<pair<int,int>>q;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(arr[i][j]==1){
            cnt++;
            arr[i][j]=0;
            q.push(make_pair(i,j));
            while(!q.empty()){
                int ni=q.front().first;
                int nj=q.front().second;
                q.pop();
                for(int k=0;k<8;k++){
                    if(valid(ni+r[k],nj+c[k])&&arr[ni+r[k]][nj+c[k]]==1){
                        arr[ni+r[k]][nj+c[k]]=0;
                        q.push(make_pair(ni+r[k],nj+c[k]));
                    }
                }
            }
        }
    }
}
return cnt;
}
int main(){
vector<vector<int>>arr={{1,1,1,0,1,1},
                                                {0,1,1,0,0,1},
                                                {1,0,0,0,0,0},
                                                {1,0,1,0,1,1},
                                                {1,1,0,0,1,1}};
cout<<islandcount(arr);

return 0;
}
