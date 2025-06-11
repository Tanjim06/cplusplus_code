#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
vector<pair<int,int>>instrument(n);
for(int i=0;i<n;i++){
    cin>>instrument[i].first;
    instrument[i].second=i+1;
}
sort(instrument.begin(),instrument.end());
vector<int>idx;
for(int i=0;i<n;i++){
    if(instrument[i].first<=k){
        idx.push_back(instrument[i].second);
        k-=instrument[i].first;
    }
    else{
        break;
    }
}
cout<<idx.size()<<endl;
for(int i=0;i<idx.size();i++){
    cout<<idx[i]<<" ";
}
return 0;
}
