#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    int n=(x-1)%10;
    int ans=n*10;
    if(x<=9) cout<<ans+1<<endl;
    else if(x>9 && x<=99) cout<<ans+3<<endl;
    else if(x>99 && x<=999)cout<<ans+6<<endl;
    else if(x>999 && x<=9999)cout<<ans+10<<endl;
}
return 0;
}
