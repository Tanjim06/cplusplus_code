#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int T,S,V;
    cin>>T>>S>>V;
    if(V*T>=S) cout<<"SIM"<<endl;
    else cout<<"NAO"<<endl;
}
return 0;
}
