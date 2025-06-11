#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        if(y<=x){
            cout<<x<<endl;
        }
        else{
            x+=k;
            x=min(x,y);
            cout<<y+(y-x)<<endl;
        }
    }

    return 0;
}