#include<iostream>
#include<cstring>
#include<map>
using namespace std;
int stringsize(string str,int n,int k){
    map<char,int>mp;
    for(int i=0;i<3;i++){
        mp[str[i]]++;
    }
    int i=0;
    int j=2;
    int ans=0;
    while(j<n-1){
        j++;
        mp[str[j]]++;
        mp[str[i]]--;
        i++;
        bool flag=true;
        for(auto &it:mp){
            if(it.second>1){
                flag=false;
                break;
            }
        }
        if(flag){
            ans++;
        }
    }
    return ans;
}
int main(){
    string str;
    cin>>str;
    int n=str.size();
    int k=3;
    cout<<stringsize(str,n,k);
    return 0;
}