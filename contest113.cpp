#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    float ans=0;
    float sumx=0,sumy=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        sumx+=x;
        sumy+=y;
    }
    ans=(sumx/sumy)*100;
    cout<<fixed<<setprecision(2)<<ans;
    return 0;
}