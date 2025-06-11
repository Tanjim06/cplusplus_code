#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int total=(a+b+c);
    int target=total/3;
    if(total%3!=0) cout<<"NO"<<endl;
    else{
        if(a>target || b>target) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
return 0;
}
