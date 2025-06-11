#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;
int main(){
    int s;
    cin>>s;
    unordered_map<string,int>mp;
    for(int i=0;i<s;i++){
        string str;
        int value;
        cin>>str>>value;
        mp[str]=value;
    }
    int t;
    cin>>t;
    while(t--){
        string query;
        cin>>query;
        cout<<mp[query]<<endl;
    }
    return 0;
}