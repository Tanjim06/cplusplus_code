#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>st;
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }
    vector<int>v;
    for(auto &it:st){
        v.push_back(it);
    }
    map<char,char>mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]=v[v.size()-i-1];
    }
    for(int i=0;i<n;i++){
        cout<<mp[s[i]];
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}