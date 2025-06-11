#include<iostream>
#include<vector>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>rounds;
vector<int>v={10,100,1000,10000,100000};
for(int i=0;i<v.size();i++){
    if(n%v[i]!=0){
        rounds.push_back(n%v[i]);
        n-=(n%v[i]);
    }
}
cout<<rounds.size()<<endl;
for(int i=0;i<rounds.size();i++){
    cout<<rounds[i]<<" ";
}cout<<endl;
}
return 0;
}
