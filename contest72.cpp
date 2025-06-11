#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
	int q,k,n;cin>>k>>q;
    int a[k];
	for(int i=0;i<k;i++) cin>>a[i];
	for(int i=0;i<q;i++){
		cin>>n;
		cout<<min(a[0]-1,n)<<" ";
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