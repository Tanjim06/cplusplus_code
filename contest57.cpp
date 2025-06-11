#include<iostream>
#include<cstring>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int i=0,j=n-1;
    while(i<=j){
        if(str[i]!=str[j]){
            if(abs(str[i]-str[j])!=2){
               cout<<"NO\n";
                return;
            }
        }
        i++;
        j--;
        }
        cout<<"YES\n";
        return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}