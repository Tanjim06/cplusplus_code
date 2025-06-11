#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int diff=y-x;
    int speed=a+b;
    if(diff%speed==0)cout<<diff/speed<<endl;
    else cout<<-1<<endl;
}
return 0;
}
