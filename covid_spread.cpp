#include<iostream>
#include<queue>
#include<vector>
int r[4]={-1,1,0,0};
int c[4]={0,0,-1,1};
int row,column;
using namespace std;
bool valid(int i,int j){
    return i>=0 && i<row && j>=0 && j<column;
}
int helper(vector<vector<int>>hospital){
row=hospital.size();
column=hospital[0].size();
queue<pair<int,int>>q;
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        if(hospital[i][j]==2){
            q.push(make_pair(i,j));
        }
    }
}
int timer=0;
while(!q.empty()){
    timer++;
    int curr_patient=q.size();
    while(curr_patient--){
        int i=q.front().first;
        int j=q.front().second;
        q.pop();
        for(int k=0;k<4;k++){
            if(valid(i+r[k],j+c[k])&&hospital[i+r[k]][j+c[k]]==1){
                hospital[i+r[k]][j+c[k]]=2;
                q.push(make_pair(i+r[k],j+c[k]));
            }
        }
    }
}
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(hospital[i][j]==1) return -1;
        }
    }
    return timer-1;
}

int main(){
vector<vector<int>>hospital={{1, 2, 1, 1, 0, 1},
                                                                {1, 1, 0, 1, 1, 2},
                                                                {0, 1, 0, 2, 1, 1},
                                                                {1, 1, 0, 1, 0, 1},
                                                                {1, 0, 1, 2, 0, 1}};

cout<<helper(hospital);
return 0;
}
