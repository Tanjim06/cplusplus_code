#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=n;
    int c=0;
    for(int i=0;i<n;i++){
        c++;
        if(s[i]=='1'){
            ans=max(ans,(i+1)*2);
            c++;
        }
    }
    reverse(s.begin(),s.end());
    ans=max(ans,c);
    for(int i=0;i<n;i++){
        c++;
        if(s[i]=='1'){
            ans=max(ans,(i+1)*2);
            c++;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}