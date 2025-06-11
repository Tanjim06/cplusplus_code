#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
int oposx,opussy;
vector<vector<int>> v(5,vector<int>(5));
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>v[i][j];
    }
}
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(v[i][j]==1){
            oposx = i;
            opussy = j;
        }
    }
}
int distance = abs(oposx-2)+abs(opussy-2);
cout<<distance;
return 0;
}
